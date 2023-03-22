-- Title : 조건별로 분류하여 주문상태 출력하기
-- Level : 3
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/131113
-- =========================================================================
/*
테이블 구조

Table FOOD_ORDER {
  ORDER_ID  VARCHAR(10) [NOT NULL]
  PRODUCT_ID  VARCHAR(5)  [NOT NULL]
  AMOUNT  NUMBER  [NOT NULL]
  PRODUCE_DATE  DATE  [NULL]
  IN_DATE  DATE  [NULL]
  OUT_DATE  DATE  [NULL]
  FACTORY_ID  VARCHAR(10)  [NOT NULL]
  WAREHOUSE_ID  VARCHAR(10)  [NOT NULL]
}
*/
SELECT ORDER_ID,
    PRODUCT_ID,
    DATE_FORMAT(OUT_DATE, '%Y-%m-%d'),
    CASE
        WHEN OUT_DATE IS NULL THEN '출고미정'
        WHEN DATEDIFF(OUT_DATE, DATE('2022-05-01')) > 0 THEN '출고대기'
        WHEN DATEDIFF(OUT_DATE, DATE('2022-05-01')) <= 0 THEN '출고완료'
    END AS 출고여부
FROM FOOD_ORDER AS orders
ORDER BY ORDER_ID ASC