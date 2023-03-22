-- Title : 인기있는 아이스크림
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/133024
-- =========================================================================
/*
테이블 구조

Table FIRST_HALF {
  SHIPMENT_ID INT(N)
  FLAVOR  VARCHAR(N)
  TOTAL_ORDER INT(N)
}
*/

SELECT sales.FLAVOR
FROM FIRST_HALF AS sales
ORDER BY sales.TOTAL_ORDER DESC, sales.SHIPMENT_ID ASC
