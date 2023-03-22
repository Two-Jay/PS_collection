-- Title : 즐겨찾기가 가장 많은 식당 정보 출력하기
-- Level : 3
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/131123
-- =================================================================
/*
테이블 구조

Table REST_INFO {
  REST_ID  VARCHAR(5)  [NOT NULL]
  REST_NAME  VARCHAR(50)  [NOT NULL]
  FOOD_TYPE  VARCHAR(20)  [NULL]
  VIEWS  NUMBER  [NULL]
  FAVORITES  NUMBER  [NULL]
  PARKING_LOT  VARCHAR(1)  [NULL]
  ADDRESS  VARCHAR(100)  [NULL]
  TEL  VARCHAR(100)  [NULL]
}
*/

SELECT FOOD_TYPE,REST_ID,REST_NAME,FAVORITES
FROM REST_INFO
WHERE FOOD_TYPE IN (
    SELECT FOOD_TYPE
    FROM REST_INFO AS infos
    GROUP BY FOOD_TYPE
    HAVING FAVORITES = MAX(FAVORITES)
)
ORDER BY FOOD_TYPE DESC

/*
GROUP BY를 사용하는 대표적인 문제다.
동일한 데이터테이블 내에서 특정 컬럼을 기준으로 그룹화하고 싶다면 GROUP BY를 사용한다.

CTE를 사용하면 훨씬 간단하게 풀 수 있다.
위의 방법을 CTE로 사용해서 풀려면, 별도의 테이블로 생성되기에
JOIN을 사용하여 풀어야 한다.
*/
WITH MAX_FAV AS (
    SELECT FOOD_TYPE, MAX(FAVORITES) AS FAVOR
    FROM REST_INFO AS infos
    GROUP BY FOOD_TYPE
)

SELECT
    REST_INFO.FOOD_TYPE,
    REST_INFO.REST_ID,
    REST_INFO.REST_NAME,
    REST_INFO.FAVORITES
FROM REST_INFO, MAX_FAV
WHERE REST_INFO.FAVORITES = MAX_FAV.FAVOR
GROUP BY REST_INFO.FOOD_TYPE
ORDER BY REST_INFO.FOOD_TYPE DESC