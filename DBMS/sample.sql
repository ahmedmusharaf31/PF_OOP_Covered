-- CREATE TABLE accounts(
-- user_id serial PRIMARY KEY,
-- username varchar (50) unique not null,
-- password varchar(50) not null,
-- email varchar (255) unique not null,
-- created_on timestamp not null,
-- 	last_login timestamp
-- );

-- SELECT * FROM accounts;

-- CREATE TABLE roles
-- (role_id serial primary key,
--  role_name varchar(255) unique not null
-- );

-- SELECT * FROM roles;

-- CREATE TABLE account_roles
-- (user_id INT NOT NULL,
--  role_id int not null,
--  grant_date timestamp with time zone,
--  grant_date_record timestamp(3),
--  PRIMARY KEY (user_id,role_id),
--  FOREIGN KEY (role_id) REFERENCES roles(role_id)
--  FOREIGN KEY (user_id) REFERENCES accounts (user_id)
-- );

-- SELECT * FROM account_roles;

-- ALTER TABLE account_roles ADD CONSTRAINT acc UNIQUE(user_id);

-- ALTER TABLE accounts ADD COLUMN saeed varchar(255) unique not null;

-- SELECT * FROM accounts;

-- ALTER TABLE accounts DROP saeed;

-- ALTER TABLE accounts RENAME COLUMN email TO email_spam;

-- ALTER TABLE accounts ALTER COLUMN last_login SET DEFAULT CURRENT_TIMESTAMP;
-- INSERT INTO accounts VALUES(12,'ahmed','*****','xyz@gmai.com',CURRENT_TIMESTAMP,CURRENT_TIMESTAMP);

-- ALTER TABLE accounts ALTER COLUMN last_login DROP DEFAULT;

-- ALTER TABLE accounts ALTER COLUMN email_spam SET NOT NULL;

-- ALTER TABLE accounts ALTER COLUMN email_spam DROP NOT NULL;

-- ALTER TABLE account_roles ADD CHECK (user_id>=1000);
-- SELECT * FROM account_roles;

-- ALTER TABLE account_roles ADD CONSTRAINT acw UNIQUE(user_id);
-- ALTER TABLE accounts ADD CONSTRAINT new_constraint UNIQUE(password);

-- ALTER TABLE accounts RENAME TO accounts_saxx;
-- SELECT * FROM accounts_saxx;

-- ALTER TABLE accounts_saxx RENAME TO accounts;

-- CREATE TABLE Employees_Table (
--     emp_id INT,
--     emp_name VARCHAR(50),
--     job_name VARCHAR(50),
--     manager_id INT,
--     hire_date DATE,
--     salary NUMERIC(10, 2),
--     commission NUMERIC(10, 2),
--     dep_id INT
-- );

-- INSERT INTO Employees_Table (emp_id, emp_name, job_name, manager_id, hire_date, salary, commission, dep_id)
-- VALUES
-- (68319, 'KAYLING', 'PRESIDENT', NULL, '1991-11-18', 6000.00, NULL, 1001),
-- (66928, 'BLAZE', 'MANAGER', 68319, '1991-05-01', 2750.00, NULL, 3001),
-- (67832, 'CLARE', 'MANAGER', 68319, '1991-06-09', 2550.00, NULL, 1001),
-- (65646, 'JONAS', 'MANAGER', 68319, '1991-04-02', 2957.00, NULL, 2001),
-- (67858, 'SCARLET', 'ANALYST', 65646, '1997-04-19', 3100.00, NULL, 2001),
-- (69062, 'FRANK', 'ANALYST', 65646, '1991-12-03', 3100.00, NULL, 2001),
-- (63679, 'SANDRINE', 'CLERK', 69062, '1990-12-18', 900.00, NULL, 2001),
-- (64989, 'ADELYN', 'SALESMAN', 66928, '1991-02-20', 1700.00, 400.00, 3001),
-- (65271, 'WADE', 'SALESMAN', 66928, '1991-02-22', 1350.00, 600.00, 3001),
-- (66564, 'MADDEN', 'SALESMAN', 66928, '1991-09-28', 1350.00, 1500.00, 3001),
-- (68454, 'TUCKER', 'SALESMAN', 66928, '1991-09-08', 1600.00, 0.00, 3001),
-- (68736, 'ADNRES', 'CLERK', 67858, '1997-05-23', 1200.00, NULL, 2001),
-- (69000, 'JULIUS', 'CLERK', 66928, '1991-12-03', 1050.00, NULL, 3001),
-- (69324, 'MARKER', 'CLERK', 67832, '1992-01-23', 1400.00, NULL, 1001);

-- SELECT * FROM EMPLOYEES;
-- SELECT salary as EMPLOYEE_SALARY FROM Employees_Table;

-- SELECT emp_name FROM Employees_Table;

-- SELECT job_name FROM Employees_Table;

-- ALTER TABLE Employees_Table RENAME COLUMN emp_id TO "NO";

-- SELECT * FROM Employees_Table;

-- ALTER TABLE Employees_Table RENAME TO emp;
-- SELECT * FROM emp;


-- CREATE TABLE departments
-- (dep_id SERIAL PRIMARY KEY,
--  dep_name VARCHAR(50) NOT NULL
-- );

-- CREATE TABLE employee
-- (emp_id serial primary key,
--  emp_name varchar(50) not null,
--  dep_id int,
--  foreign key (dep_id) REFERENCES departments(dep_id)
-- );

-- insert into departments(dep_name)
-- values('HR'),('Finance'),('IT');

-- Insert into employee(emp_name,dep_id) values
-- ('John Doe',1),
-- ('Jane Smith',1),
-- ('Mike Johnson',2),
-- ('Emily Brown',3);

-- SELECT emp.emp_name,dep.dep_id,dep.dep_name
-- FROM employee as emp INNER JOIN departments dep ON emp.dep_id=dep.dep_id;


CREATE TABLE FRIENDS
(Id SERIAL PRIMARY KEY, Name VARCHAR(50), Age INT, Hobby VARCHAR(50), Department VARCHAR(50));

INSERT INTO FRIENDS
(Name, Age, Hobby, Department) Values
('Ahmed',19,'Cricket','CE'),
('Arsal',20,'Football','CE'),
('Saeed',20,'Basketball','CE'),
('Mamba',40,'Squash','CYS'),
('Ali',35,'Checkers','SE'),
('Affan',35,'Baseball','ME'),
('Sabahat',30,'Tennis','CS');

SELECT * from FRIENDS
WHERE Id=5 OR Id=7;

SELECT * FROM FRIENDS;

SELECT * FROM FRIENDS 
WHERE Name LIKE 'A%';

SELECT * FROM FRIENDS WHERE Age>=18;
SELECT * FROM FRIENDS WHERE Id BETWEEN 2 AND 8;

SELECT id,name as first_name,age,hobby,department from friends;

SELECT DISTINCT age FROM FRIENDS;

SELECT * FROM FRIENDS WHERE ID IS NULL OR NAME IS NULL OR AGE IS NULL OR HOBBY IS NULL OR DEPARTMENT IS NULL;
Update FRIENDS
set Name= NULL WHERE Id=4;

DROP TABLE FRIENDS;

ALTER TABLE FRIENDS 
ADD COLUMN score numeric(10,2),
ADD COLUMN height numeric(10);

SELECT * FROM FRIENDS;

ALTER TABLE FRIENDS 
DROP COLUMN AGE;

UPDATE FRIENDS SET department='AG'
WHERE Id=7;

CREATE TABLE Employee_Info
(Emp_id INT PRIMARY KEY, Name varchar(255),age int,department varchar(255));

CREATE TABLE SALARY
(SALARY INT,
 EMP_ID INT,
FOREIGN KEY (EMP_ID) REFERENCES Employee_Info(Emp_id));

Insert into Employee_Info(emp_id,name,age,department) VALUES
(2022067,'ahmed',19,'ce'),
(2022350,'saeed',20,'cys'),
(2022047,'affan',30,'mgs'),
(2022063,'xyz',20,'abc'),
(2022199,'hello',29,'abc');

INSERT INTO SALARY(salary, emp_id)
VALUES(25000,2022067),
(30000,2022063),
(40000,2022350),
(50000,2022047),
(60000,2022199);


DROP TABLE EMPLOYEE_INFO;
DROP TABLE SALARY;

DELETE FROM SALARY WHERE EMP_ID = 2022350; -- delete from salary where emp_id=2022350; row r1,r2,...,rn

SELECT* FROM SALARY;
TRUNCATE TABLE SALARY cascade;

SELECT * FROM EMPLOYEE_INFO;

CREATE TABLE ORDER_TABLE
(ORDER_ID INT,total_amount numeric(10,2), customer_id int,quantity int,order_date DATE);

INSERT INTO ORDER_TABLE (ORDER_ID, total_amount, customer_id, quantity, order_date)
VALUES
(1, 100.50, 101, 5, '2022-01-15'),
(2, 75.25, 101, 3, '2022-01-16'),
(3, 200.00, 102, 8, '2022-01-17'),
(4, 50.75, 103, 2, '2022-01-18'),
(6,20.67,104,4,'2022-01-16'),
(7,24.75,104,3,'2022-05-12');

SELECT CUSTOMER_ID, COUNT(*) AS TOTAL_ORDERS
FROM ORDER_TABLE 
GROUP BY CUSTOMER_ID
HAVING COUNT(*)>1;

DROP TABLE ORDER_TABLE;