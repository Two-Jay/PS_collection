-- Title : 서울에 위치한 식당 목록 출력하기
-- Level : 4
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/131118
-- =========================================================================
/*
테이블 구조

Table REST_INFO {
  REST_ID VARCHAR(5)  [not null]
  REST_NAME VARCHAR(50) [not null]
  FOOD_TYPE VARCHAR(20) [null]
  VIEWS NUMBER  [null]
  FAVORITES NUMBER  [null]
  PARKING_LOT VARCHAR(1)  [null]
  ADDRESS VARCHAR(100)  [null]
  TEL VARCHAR(100)  [null]
}

Table REST_REVIEW {
  REVIEW_ID VARCHAR(10) [not null]
  REST_ID VARCHAR(10) [null]
  MEMBER_ID VARCHAR(100)  [null]
  REVIEW_SCORE  NUMBER  [null]
  REVIEW_TEXT VARCHAR(1000) [null]
  REVIEW_DATE DATE  [null]
}

Ref: "REST_INFO"."REST_ID" < "REST_REVIEW"."REST_ID"
*/

SELECT restaurant.REST_ID,
    restaurant.REST_NAME,
    restaurant.FOOD_TYPE,
    restaurant.FAVORITES,
    restaurant.ADDRESS,
    ROUND(AVG(REVIEW_SCORE), 2) AS SCORE
FROM REST_INFO AS restaurant
INNER JOIN REST_REVIEW AS reviews ON restaurant.REST_ID = reviews.REST_ID
WHERE restaurant.ADDRESS LIKE '서울%시%'
GROUP BY restaurant.REST_ID
ORDER BY SCORE DESC, FAVORITES DESC

/*
Right join을 사용하면, 왼쪽 테이블의 모든 데이터를 가져오고, 오른쪽 테이블의 데이터가 없는 경우 NULL로 채운다.
따라서 SCORE에 NULL이 들어가는 경우가 생긴다.
그래서 INNER JOIN을 사용하여, 두 테이블의 데이터가 모두 있는 경우만 가져온다.

ROUND 함수는 소수점을 반올림한다.
문제의 요건에서 평균 평점을 소수점 둘째 자리까지 반올림하여 출력하라고 했으므로,
ROUND 함수를 사용하여 평점을 반올림한다.

WHERE 절에서 LIKE를 사용하여, 주소가 서울로 시작하는 데이터만 가져온다.
데이터 상에서는 '서울시'와 '서울특별시'에 해당하는 데이터 모두 존재하므로
'서울%시'로 LIKE를 사용하여, 서울로 시작하고 시로 끝나는 데이터를 가져온다.

GROUP BY를 사용하여, REST_ID를 기준으로 그룹을 만든다.
GROUP BY를 사용하여 집계함수를 사용할 수 있다.
따라서 평점을 구하기 위해 GROUP BY를 사용하여 데이터를 그룹화하고 집계함수 중 하나인 AVG 함수를 사용하였다.
*/