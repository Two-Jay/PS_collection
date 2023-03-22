-- Title : 카테고리 별 상품 개수 구하기
-- Level : 2
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/131529
-- =================================================================
/*
테이블 구조

Table PRODUCT {
  PRODUCT_ID  INTEGER [NOT NULL]
  PRODUCT_CODE  VARCHAR(8)  [NOT NULL]
  PRICE INTEGER [NOT NULL]
}
*/
SELECT SUBSTR(PRODUCT_CODE, 1, 2) AS CATEGORY,
    COUNT(*) AS PRODUCTS
FROM PRODUCT AS p
GROUP BY CATEGORY
ORDER BY CATEGORY

/*
GROUP BY는 특정 컬럼을 기준으로 그룹을 만들어 그룹별로 집계함수를 적용할 수 있다.
따라서 COUNT(*)를 통해 그룹화한 카테고리별로 상품을 셀 수 있다.
*/
