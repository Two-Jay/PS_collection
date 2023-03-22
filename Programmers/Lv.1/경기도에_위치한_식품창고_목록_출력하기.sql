-- Title : 경기도에 위치한 식품창고 목록 출력하기
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/131114
-- =========================================================================
/*
테이블 구조

Table FOOD_WAREHOUSE {
  WAREHOUSE_ID varchar(10) [not null]
  WAREHOUSE_NAME varchar(20) [not null]
   ADDRESS varchar(100) [null]
   TLNO varchar(20) [null]
   FREEZER_YN varchar(1) [null]
}
*/

SELECT WAREHOUSE_ID,
    WAREHOUSE_NAME,
    ADDRESS,
    IFNULL(FREEZER_YN, 'N')
FROM FOOD_WAREHOUSE AS food_wh
WHERE food_wh.ADDRESS LIKE '%경기도%'
ORDER BY food_wh.WAREHOUSE_ID ASC

/*
IFNULL(target,  replace_value) 함수는
레코드가 특정 컬럼에 NULL 값이 들어가 있는 경우, NULL 값을 특정 값으로 대체하고 싶을 때 사용한다.

WHERE 절에서 LIKE를 사용하여, 주소에 경기도가 포함된 데이터만 가져온다.
ORDER BY를 사용하여, WAREHOUSE_ID를 기준으로 오름차순으로 정렬한다.
*/