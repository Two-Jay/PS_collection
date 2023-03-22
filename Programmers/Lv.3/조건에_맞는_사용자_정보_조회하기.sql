-- Title : 조건에 맞는 사용자 정보 조회하기
-- Level : 3
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/164670
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
  
Table USED_GOODS_USER {
    USER_ID  VARCHAR(50)  [NOT NULL]
    NICKANME  VARCHAR(100)  [NOT NULL]
    CITY  VARCHAR(100)  [NOT NULL]
    STREET_ADDRESS1  VARCHAR(100)  [NOT NULL]
    STREET_ADDRESS2  VARCHAR(100)  [NULL]
    TLNO  VARCHAR(20)  [NOT NULL]
}
*/

-- 코드를 입력하세요
SELECT USER_ID,
    NICKNAME,
    CONCAT(CITY, ' ', STREET_ADDRESS1, ' ', STREET_ADDRESS2) AS 전체주소,
    CONCAT(SUBSTR(TLNO, 1, 3), '-', SUBSTR(TLNO, 4, 4), '-', SUBSTR(TLNO, 8, 4)) AS 전화번호
FROM USED_GOODS_USER AS users
LEFT JOIN USED_GOODS_BOARD AS boards ON users.USER_ID = boards.WRITER_ID
GROUP BY users.USER_ID 
HAVING COUNT(users.USER_ID) >= 3
ORDER BY users.USER_ID DESC

/*
LEFT JOIN은 왼쪽 테이블의 모든 데이터를 가져오고 오른쪽 테이블의 데이터가 없는 경우 NULL 값을 가져오는 조인이다.
LEFT JOIN은 LEFT OUTER JOIN으로도 사용할 수 있다.

CONCAT()은 문자열을 합치는 함수이다.
CONCAT(문자열1, 문자열2, 문자열3, ...)로 사용한다.

SUBSTR()은 문자열의 일부를 추출하는 함수이다.
SUBSTR(문자열, 시작위치, 길이)로 사용한다.

특정 값을 기준으로 중복되는 로우를 조건화해서 체크하고 싶다면
GROUP BY를 사용하고 HAVING을 사용하여 조건을 걸어준다.
*/