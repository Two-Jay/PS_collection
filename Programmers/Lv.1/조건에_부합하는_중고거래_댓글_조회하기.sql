-- Title : 조건에 부합하는 중고거래 댓글 조회하기
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/164673
-- =========================================================================
/*
테이블 구조

Table USED_GOODS_BOARD {
  BOARD_ID  varchar(5)
  WRITER_ID varchar(50)
  TITLE     varchar(100)
  CONTENTS  varchar(1000)
  PRICE     NUMBER
  CREATED_DATE  DATE
  STATUS    varchar(10)
  VIEWS     NUMBER
}

Table USED_GOODS_REPLY {
  REPLY_ID  varchar(10)
  BOARD_ID  varchar(5) [ref:> USED_GOODS_BOARD.BOARD_ID ]
  WRITER_ID varchar(50)
  CONTENTS  varchar(1000) [null]
  CREATED_DATE DATE 
}
*/

SELECT BOARD.TITLE AS TITLE,
    BOARD.BOARD_ID AS BOARD_ID,
    REPLY.REPLY_ID AS REPLY_ID,
    REPLY.WRITER_ID AS WRITER_ID,
    REPLY.CONTENTS AS CONTENTS,
    DATE_FORMAT(REPLY.CREATED_DATE, '%Y-%m-%d') AS CREATED_DATE
    FROM USED_GOODS_BOARD AS BOARD
JOIN USED_GOODS_REPLY AS REPLY ON BOARD.BOARD_ID = REPLY.BOARD_ID
WHERE BOARD.CREATED_DATE BETWEEN '2022-10-01' AND '2022-10-31'
ORDER BY REPLY.CREATED_DATE ASC, BOARD.TITLE ASC;