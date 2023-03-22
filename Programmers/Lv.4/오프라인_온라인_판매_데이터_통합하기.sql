-- Title: 오프라인/온라인 판매 데이터 통합하기
-- Level: 4
-- Category: 프로그래머스
-- URL: https://school.programmers.co.kr/learn/courses/30/lessons/131537
/*
테이블 구조

Table ONLINE_SALE {
  ONLINE_SALE_ID  INTEGER  [not null]
  USER_ID  INTEGER  [not null]
  PRODUCT_ID  INTEGER  [not null]
  SALES_AMOUNT  INTEGER  [not null]
  SALES_DATE  DATE  [not null]
}
  
Table OFFLINE_SALE {
  OFFLINE_SALE_ID  INTEGER  [not null]
  PRODUCT_ID  INTEGER  [not null]
  SALES_AMOUNT  INTEGER  [not null]
  SALES_DATE  DATE  [not null]
}
*/

SELECT DATE_FORMAT(SALES_DATE, '%Y-%m-%d') AS SALES_DATE,
    PRODUCT_ID,
    USER_ID,
    SALES_AMOUNT
FROM ONLINE_SALE AS on_sale
WHERE YEAR(SALES_DATE) = 2022 AND MONTH(SALES_DATE) = 3
UNION ALL
SELECT DATE_FORMAT(SALES_DATE, '%Y-%m-%d') AS SALES_DATE,
    PRODUCT_ID,
    NULL as USER_ID,
    SALES_AMOUNT
FROM OFFLINE_SALE AS off_sale
WHERE YEAR(SALES_DATE) = 2022 AND MONTH(SALES_DATE) = 3

ORDER BY SALES_DATE ASC, PRODUCT_ID ASC, USER_ID ASC

/*
UNION ALL은 중복된 데이터를 포함해서 합친다.
UNION을 이용해서 두 테이블을 합치면 중복된 데이터가 제거된다.
따라서 서로 다른 테이블을 블러와서 UNION을 이용해서 합쳤다.

UNION은 두 개 이상의 SELECT 문의 결과 집합을 결합하는 SQL 문입니다. UNION을 사용할 때 주의해야 할 몇 가지 사항이 있습니다.

    SELECT 문의 결과 집합이 호환 가능해야 합니다. (같은 열을 가져야 합니다.)
    UNION과 UNION ALL의 차이를 이해하고 중복된 행이 필요한 경우 UNION ALL을 사용합니다. (UNION ALL은 중복된 행을 포함합니다.)
    ORDER BY를 사용할 때는 전체 결과 집합이 정렬된다는 것을 염두에 두어야 합니다. (ORDER BY는 마지막에 사용해야 합니다.)
    조인하는 경우 결과 집합에 중복된 행이 포함될 수 있습니다. (이는 UNION ALL을 사용하여 해결할 수 있습니다.)
    매우 큰 결과 집합을 생성할 수 있으므로 성능 문제가 발생할 수 있습니다. 
    인덱스를 사용하여 쿼리 성능을 향상시킬 수 있습니다. 
*/

/*
서브쿼리를 이용하면 중복된 로직을 제거할 수 있다.
*/
SELECT * FROM (
    SELECT DATE_FORMAT(on_sale.SALES_DATE, '%Y-%m-%d') AS SALES_DATE,
        on_sale.PRODUCT_ID,
        on_sale.USER_ID,
        on_sale.SALES_AMOUNT
    FROM ONLINE_SALE AS on_sale
    UNION ALL
    SELECT DATE_FORMAT(off_sale.SALES_DATE, '%Y-%m-%d') AS SALES_DATE,
        off_sale.PRODUCT_ID,
        NULL as USER_ID,
        off_sale.SALES_AMOUNT
    FROM OFFLINE_SALE AS off_sale
) AS sale
WHERE YEAR(SALES_DATE) = 2022 AND MONTH(SALES_DATE) = 3
ORDER BY SALES_DATE ASC, PRODUCT_ID ASC, USER_ID ASC



