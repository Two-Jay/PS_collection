-- Title : 조건에 부합하는 중고거래 상태 조회하기
-- Level : 2
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/164672
-- =================================================================
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
*/
SELECT boards.BOARD_ID,
    boards.WRITER_ID,
    boards.TITLE,
    boards.PRICE,
    CASE
        WHEN boards.STATUS = "DONE" THEN "거래완료"
        WHEN boards.STATUS = "SALE" THEN "판매중"
        WHEN boards.STATUS = "RESERVED" THEN "예약중"
    END AS STATUS
FROM USED_GOODS_BOARD AS boards
WHERE DATE_FORMAT(boards.CREATED_DATE, '%Y%m%d') = 20221005
ORDER BY BOARD_ID DESC

/*
WHERE 절에서 DATE_FORMAT을 사용함으로써 별도의 비용지출이 필요한가... 라는 고민은 있다.
하지만, 이렇게 하면 조건을 더욱 명확하게 표현할 수 있기 때문에, 이렇게 사용하는 것이 좋다고 생각한다.
*/ㄴ