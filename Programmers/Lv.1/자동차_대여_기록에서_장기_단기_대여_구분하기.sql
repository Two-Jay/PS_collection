Title : 자동차 대여 기록에서 장기 단기 대여 구분하기
Level : 1
Category : 프로그래머스
URL : https://school.programmers.co.kr/learn/courses/30/lessons/151138
=========================================================================
/*
테이블 구조

Table CAR_RENTAL_COMPANY_RENTAL_HISTORY {
    HISTORY_ID  INTEGER [NOT NULL]
    CAR_ID      INTEGER [NOT NULL]
    START_DATE  DATE    [NOT NULL]
    END_DATE    DATE    [NOT NULL]
}
*/

SELECT HISTORY_ID,
    CAR_ID,
    DATE_FORMAT(START_DATE, '%Y-%m-%d') AS START_DATE,
    DATE_FORMAT(END_DATE, '%Y-%m-%d') AS END_DATE,
    CASE "RENT_TYPE" WHEN DATEDIFF(END_DATE, START_DATE) + 1 >= 30 THEN '단기 대여' ELSE '장기 대여' END AS RENT_TYPE
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY AS rental_history
WHERE YEAR(START_DATE) = 2022 AND MONTH(START_DATE) = 9
ORDER BY HISTORY_ID DESC

/*
CASE 문은 조건에 따라 다른 값을 반환하는 함수이다.
CASE "컬럼명" WHEN 조건1 THEN 값1 WHEN 조건2 THEN 값2 ELSE 값3 END AS "컬럼명"
CASE 문은 컬럼명을 지정하지 않고 사용할 수도 있다.
CASE WHEN 조건1 THEN 값1 WHEN 조건2 THEN 값2 ELSE 값3 END AS "컬럼명"

DATE_FORMAT()은 날짜를 원하는 형식으로 변환하는 함수이다.
DATE_FORMAT(날짜, 형식)으로 사용한다.
형식은 %Y-%m-%d와 같이 사용한다.

DATEDIFF()는 두 날짜의 차이를 구하는 함수이다.
DATEDIFF(날짜1, 날짜2)로 사용한다.
DATE 타입의 데이터는 덧셈과 뺄셈이 가능하지만 날짜의 차이를 구하는 정확한 계산이 불가능하다.
따라서 DATEDIFF()를 사용하여 날짜의 차이를 구해야 한다.
*/