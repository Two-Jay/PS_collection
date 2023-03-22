-- Title : 과일로 만든 아이스크림 고르기
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/133025
-- =========================================================================
/*
테이블 구조

Table FIRST_HALF {
  SHIPMENT_ID int(n)
  FLAVOR varchar(n)
  TOTAL_ORDER int(n)
}

Table ICECREAM_INFO {
  FLAVOR varchar(n)
  INGREDIENT_TYPE varchar(n)
}
*/

SELECT sales.FLAVOR
FROM FIRST_HALF AS sales
JOIN ICECREAM_INFO AS ic_info ON sales.FLAVOR = ic_info.FLAVOR
WHERE sales.TOTAL_ORDER >= 3000 AND ic_info.INGREDIENT_TYPE = 'fruit_based'
ORDER BY sales.TOTAL_ORDER DESC;