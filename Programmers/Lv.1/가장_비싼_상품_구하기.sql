-- Title : 가장 비싼 상품 구하기
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/131697
-- =========================================================================
/*
테이블 구조

Table PRODUCT {
  PRODUCT_ID INTEGER [not null]
  PRODUCT_CODE VARCHAR(8) [not null]
  PRICE INTEGER [not null]
}
*/

SELECT PRICE AS MAX_PRICE
FROM PRODUCT
ORDER BY PRICE DESC
LIMIT 1