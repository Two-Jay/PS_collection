-- Title : 가격이 제일 비싼 식품의 정보 출력하기
-- Level : 2
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/131115
-- =========================================================================
/*
테이블 구조

Table FOOD_PRODUCT {
  PRODUCT_ID varchar(10) [not null]
  PRODUCT_NAME varchar(50) [not null]
  PRODUCT_CD varcahr(10) [null]
  CATEGORY varchar(10) [null]
  PRICE NUMBER [null]
}
*/

SELECT PRODUCT_ID, PRODUCT_NAME, PRODUCT_CD, CATEGORY, PRICE FROM FOOD_PRODUCT
ORDER BY FOOD_PRODUCT.PRICE DESC LIMIT 1