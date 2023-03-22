-- Title : 조건에 맞는 도서 리스트 출력하기
-- Level : 1
-- Category : 프로그래머스
-- URL : https://school.programmers.co.kr/learn/courses/30/lessons/144853
-- =========================================================================
/*
테이블 구조

Table BOOK {
  BOOK_ID integer
  CATEGORY varchar(n)
  AUTHOR_ID integer
  PRICE integer
  PUBLISHED_DATE DATE
}
*/

SELECT BOOK.BOOK_ID,
    DATE_FORMAT(BOOK.PUBLISHED_DATE, '%Y-%m-%d') AS PUBLISHED_DATE
FROM BOOK
WHERE BOOK.CATEGORY = '인문' AND YEAR(PUBLISHED_DATE) = 2021
ORDER BY BOOK.PUBLISHED_DATE ASC;
