-- Title : 평균 일일 대여 요금 구하기
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/151136
-- =========================================================================
/*
테이블 구조

Table CAR_RENTAL_COMPANY_CAR {
  CAR_ID  INTEGER
  CAR_TYPE  VARCHAR(255)
  DAILY_FEE INTEGER
  OPTIONS VARCHAR(255)
}
*/

SELECT ROUND(AVG(DAILY_FEE), 0) AS AVERAGE_FEE
FROM CAR_RENTAL_COMPANY_CAR AS rentals
WHERE rentals.CAR_TYPE = 'SUV'