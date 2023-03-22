Title : 자동차 평균 대여 기간 구하기
Level : 2
Category : 프로그래머스
URL : https://school.programmers.co.kr/learn/courses/30/lessons/157342
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

SELECT car_id,
    ROUND(AVG(DATEDIFF(end_date, start_date) + 1), 1) AS AVERAGE_DURATION
FROM CAR_RENTAL_COMPANY_RENTAL_HISTORY AS rental_history
GROUP BY rental_history.car_id
HAVING AVERAGE_DURATION >= 7.0
ORDER BY AVERAGE_DURATION DESC, rental_history.car_id DESC

/*
AVG()는 평균을 구하는 함수이다.
ROUND()는 반올림을 하는 함수이다.
ROUND(숫자, 반올림할 자리수)로 사용한다.

DATEDIFF()는 두 날짜의 차이를 구하는 함수이다.
DATEDIFF(날짜1, 날짜2)로 사용한다.
DATE 타입의 데이터는 덧셈과 뺄셈이 가능하지만 날짜의 차이를 구하는 정확한 계산이 불가능하다.
따라서 DATEDIFF()를 사용하여 날짜의 차이를 구해야 한다.
*/