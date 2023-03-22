-- Title : 재구매가 일어난 상품과 회원 리스트 구하기
-- Level : 2
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/131536
-- =========================================================================
/*
테이블 구조

Table ONLINE_SALE {
  ONLINE_SALE_ID  INTEGER
  USER_ID INTEGER
  PRODUCT_ID  INTEGER
  SALES_AMOUNT  INTEGER
  SALES_DATE  DATE
}
*/

SELECT USER_ID, PRODUCT_ID
FROM ONLINE_SALE AS sales
GROUP BY sales.USER_ID, sales.PRODUCT_ID
HAVING COUNT(sales.USER_ID) >= 2
ORDER BY sales.USER_ID ASC, sales.PRODUCT_ID DESC;

/*
Group By를 사용하여 USER_ID와 PRODUCT_ID를 기준으로 그룹을 만들고,
그 그룹의 개수가 2개 이상인 것을 찾아낸다.

그리고 USER_ID를 오름차순으로, PRODUCT_ID를 내림차순으로 정렬한다.

GROUP BY는 찾아낸 데이터를 그룹으로 묶는다.
HAVING은 GROUP BY로 묶은 그룹에 조건을 걸어 그룹을 필터링한다.
WHERE은 테이블 전체를 필터링한다.
*/