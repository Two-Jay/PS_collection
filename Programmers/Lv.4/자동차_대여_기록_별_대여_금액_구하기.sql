-- Title : 자동차 대여 기록 별 대여 금액 구하기
-- Level : 4
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/151141
-- =================================================================
/*
테이블 구조

Table CAR_RENTAL_COMPANY_CAR {
CAR_ID  INTEGER  [NOT NULL]
CAR_TYPE  VARCHAR(255)  [NOT NULL]
DAILY_FEE  INTEGER  [NOT NULL]
OPTIONS  VARCHAR(255)  [NOT NULL]
}

Table CAR_RENTAL_COMPANY_RENTAL_HISTORY {
HISTORY_ID  INTEGER  [NOT NULL]
CAR_ID  INTEGER  [NOT NULL]
START_DATE  DATE  [NOT NULL]
END_DATE  DATE  [NOT NULL]
}

Table CAR_RENTAL_COMPANY_DISCOUNT_PLAN {
PLAN_ID  INTEGER  [NOT NULL]
CAR_TYPE  VARCHAR(255)  [NOT NULL]
DURATION_TYPE  VARCHAR(255)  [NOT NULL]
DISCOUNT_RATE  INTEGER  [NOT NULL]
}

Ref: "CAR_RENTAL_COMPANY_RENTAL_HISTORY"."CAR_ID" < "CAR_RENTAL_COMPANY_CAR"."CAR_ID"
*/

WITH T AS (
    SELECT rental_history.HISTORY_ID,
        rental_history.CAR_ID,
        (DATEDIFF(END_DATE, START_DATE) + 1) * car_info.DAILY_FEE AS FEE,
        CASE
            WHEN DATEDIFF(END_DATE, START_DATE) + 1 < 7 THEN NULL
            WHEN DATEDIFF(END_DATE, START_DATE) + 1 < 30 THEN '7일 이상'
            WHEN DATEDIFF(END_DATE, START_DATE) + 1 < 90 THEN '30일 이상'
            ELSE '90일 이상'
        END AS DURATION_TYPE,
        car_info.CAR_TYPE
    FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY AS rental_history
    JOIN CAR_RENTAL_COMPANY_CAR AS car_info
    ON rental_history.CAR_ID = car_info.CAR_ID
    WHERE car_info.CAR_TYPE = '트럭'
)

SELECT HISTORY_ID,
    T.FEE * (100 - IFNULL(DISCOUNT_RATE, 0)) DIV 100 AS FEE
FROM T
LEFT JOIN CAR_RENTAL_COMPANY_DISCOUNT_PLAN AS discount_plan
ON T.CAR_TYPE = discount_plan.CAR_TYPE AND T.DURATION_TYPE = discount_plan.DURATION_TYPE
ORDER BY FEE DESC, HISTORY_ID DESC

/*
WITH 키워드를 통해 Common Table Expression을 사용할 수 있다.
이렇게 생성된 Common Table Expression은 다른 쿼리에서 Alias를 통해 참조할 수 있다.

CASE 문은 조건에 따라 다른 값을 반환하는 함수이다.
CASE "컬럼명" WHEN 조건1 THEN 값1 WHEN 조건2 THEN 값2 ELSE 값3 END AS "컬럼명"
CASE 문은 컬럼명을 지정하지 않고 사용할 수도 있다.

간단한 연산은 SELECT 절에서도 사용할 수 있다.
*/