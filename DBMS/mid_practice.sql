CREATE TABLE EMPLOYEES
(EMPLOYEE_ID INT PRIMARY KEY, NAME VARCHAR(255), DEPARTMENT VARCHAR(255), SALARY INT);

CREATE TABLE PROJECTS
(PROJECT_ID INT PRIMARY KEY, PROJECT_NAME VARCHAR(255), START_DATE DATE, END_DATE DATE);

CREATE TABLE EMPLOYEE_PROJECTS
(EMPLOYEE_ID INT, PROJECT_ID INT, FOREIGN KEY(EMPLOYEE_ID) REFERENCES EMPLOYEES(EMPLOYEE_ID), FOREIGN KEY(PROJECT_ID) REFERENCES PROJECTS
(PROJECT_ID), PRIMARY KEY(EMPLOYEE_ID, PROJECT_ID));

INSERT INTO employees (employee_id, name, department, salary) VALUES
(1, 'John Doe', 'Engineering', 50000.00),
(2, 'Jane Smith', 'Marketing', 45000.00),
(3, 'Michael Johnson', 'Sales', 55000.00),
(4, 'Emily Brown', 'Engineering', 60000.00),
(5, 'David Lee', 'Marketing', 48000.00),
(6, 'Sarah Taylor', 'Sales', 52000.00),
(7, 'Daniel Martinez', 'Engineering', 52000.00),
(8, 'Emma Wilson', 'Marketing', 47000.00),
(9, 'James Anderson', 'Sales', 56000.00),
(10, 'Olivia Clark', 'Engineering', 58000.00);

INSERT INTO projects (project_id, project_name, start_date, end_date) VALUES
(1, 'Project A', '2023-01-01', '2023-06-30'),
(2, 'Project B', '2023-02-15', '2023-08-31'),
(3, 'Project C', '2023-03-15', '2023-10-31'),
(4, 'Project D', '2023-04-01', '2023-09-30'),
(5, 'Project E', '2023-05-01', '2023-11-30'),
(6, 'Project F', '2023-06-15', '2024-01-31'),
(7, 'Project G', '2023-07-01', '2023-12-31'),
(8, 'Project H', '2023-08-15', '2024-02-28'),
(9, 'Project I', '2023-09-15', '2024-03-31'),
(10, 'Project J', '2023-10-01', '2024-04-30');

INSERT INTO EMPLOYEE_PROJECTS(EMPLOYEE_ID, PROJECT_ID) VALUES(1,1),(2,1),(3,1),(4,2),(5,2),(6,3),(7,3),(8,3),(9,4);

SELECT SUM(SALARY) AS TOTAL_SALARY FROM EMPLOYEES;

SELECT E.NAME AS EMPLOYEE_NAME, COUNT(EP.EMPLOYEE_ID) AS TOTAL_PROJECTS
FROM EMPLOYEES E LEFT JOIN EMPLOYEE_PROJECTS EP
ON E.EMPLOYEE_ID=EP.EMPLOYEE_ID
GROUP BY E.EMPLOYEE_ID;

SELECT P.PROJECT_ID, P.PROJECT_NAME, COUNT(EP.PROJECT_ID) AS TOTAL_WORKING_EMPLOYEES
FROM PROJECTS P LEFT JOIN EMPLOYEE_PROJECTS EP ON P.PROJECT_ID=EP.PROJECT_ID
GROUP BY P.PROJECT_ID;

SELECT DEPARTMENT, AVG(SALARY) AS AVERAGE_SALARY FROM EMPLOYEES
GROUP BY DEPARTMENT;

SELECT P.PROJECT_ID, P.PROJECT_NAME, STRING_AGG(E.NAME,', ')
FROM PROJECTS P LEFT JOIN EMPLOYEE_PROJECTS EP ON P.PROJECT_ID=EP.PROJECT_ID
LEFT JOIN EMPLOYEES E ON EP.EMPLOYEE_ID=E.EMPLOYEE_ID
GROUP BY P.PROJECT_ID;

SELECT * FROM PROJECTS WHERE END_DATE-START_DATE=(SELECT MAX(END_DATE-START_DATE) FROM PROJECTS) LIMIT 1;

-- SELECT PROJECT_NAME FROM PROJECTS ORDER BY (END_DATE-START_DATE) DESC LIMIT 1;

SELECT NAME FROM EMPLOYEES WHERE EMPLOYEE_ID IN (SELECT EMPLOYEE_ID FROM EMPLOYEE_PROJECTS GROUP BY EMPLOYEE_ID HAVING COUNT(DISTINCT PROJECT_ID)=
(SELECT COUNT(*) FROM PROJECTS));

SELECT * FROM PROJECTS;

SELECT NAME FROM EMPLOYEES WHERE EMPLOYEE_ID IN (SELECT EMPLOYEE_ID FROM EMPLOYEE_PROJECTS WHERE PROJECT_ID IN (1,2));

SELECT EMPLOYEE_ID,NAME FROM EMPLOYEES WHERE SALARY > ANY(SELECT SALARY FROM EMPLOYEES);

DROP TABLE EMPLOYEE_PROJECTS CASCADE;


