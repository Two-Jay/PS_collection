-- Title : 조회수가 가장 많은 중고거래 게시판의 첨부파일 조회하기
-- Level : 3
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/164671
-- =========================================================================
/*
테이블 구조

Table USED_GOODS_BOARD {
BOARD_ID  VARCHAR(5)  [NOT NULL]
WRITER_ID  VARCHAR(50)  [NOT NULL]
TITLE  VARCHAR(100)  [NOT NULL]
CONTENTS  VARCHAR(1000)  [NOT NULL]
PRICE  NUMBER  [NOT NULL]
CREATED_DATE  DATE  [NOT NULL]
STATUS  VARCHAR(10)  [NOT NULL]
VIEWS  NUMBER  [NOT NULL]
}

Table USED_GOODS_FILE {
  FILE_ID VARCHAR(10) [NOT NULL]
  FILE_EXT  VARCHAR(5)  [NOT NULL]
  FILE_NAME VARCHAR(256)  [NOT NULL]
  BOARD_ID  VARCHAR(10) [NOT NULL]
}

Ref: "USED_GOODS_BOARD"."BOARD_ID" < "USED_GOODS_FILE"."BOARD_ID"
*/
SELECT CONCAT("/home/grep/src/", files.BOARD_ID, '/', FILE_ID, FILE_NAME, FILE_EXT) AS FILE_PATH
FROM USED_GOODS_FILE AS files
LEFT JOIN USED_GOODS_BOARD AS boards ON boards.BOARD_ID = files.BOARD_ID
WHERE boards.VIEWS = (
    SELECT MAX(boards1.VIEWS)
    FROM USED_GOODS_BOARD AS boards1
)
ORDER BY files.FILE_ID DESC

/*
CONCAT()은 문자열을 합치는 함수이다.

특정 조건에 해당하는 로우를 찾고 싶다면
WHERE을 사용하여 조건을 걸어준다.

특정 조건에 부합하는 테이블을 가져오고 싶다면
서브쿼리를 사용하여 조건을 걸어준다.

특정조건에 부합하는 테이블의 로우를 조건화해서 병합하고 싶다면 GROUP BY를 사용하고 HAVING을 사용하여 조건을 걸어준다.
특정조건에 부합하는 테이블의 로우를 조건화해서 개별적으로 체크하고 싶다면 WHERE을 사용하여 서브쿼리로 가져온다.
*/
