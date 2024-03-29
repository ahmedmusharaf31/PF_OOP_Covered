CREATE TABLE TRAINS(TRAIN_ID INT PRIMARY KEY, TRAIN_NAME VARCHAR(255) UNIQUE, TRAIN_SPEED INT, TRAIN_CABINS INT);

CREATE TABLE TRAINS_ROUTES(ROUTE_ID INT PRIMARY KEY, DEPARTURE VARCHAR NOT NULL, DESTINATION VARCHAR(255) NOT NULL, DISTANCE INT);

CREATE TABLE TRAINS_ALLOCATION(TRAIN_ID INT NOT NULL, ROUTE_ID INT NOT NULL, FOREIGN KEY(TRAIN_ID) REFERENCES TRAINS(TRAIN_ID), 
FOREIGN KEY(ROUTE_ID) REFERENCES TRAINS_ROUTES(ROUTE_ID), PRIMARY KEY (TRAIN_ID, ROUTE_ID));

CREATE TABLE PASSENGERS(P_ID INT PRIMARY KEY, P_NAME VARCHAR(255), P_CITY VARCHAR(255));

CREATE TABLE BOOKINGS(BOOKING_ID INT PRIMARY KEY, P_ID INT NOT NULL, TRAIN_ID INT NOT NULL, ROUTE_ID INT NOT NULL, FOREIGN KEY(P_ID) REFERENCES PASSENGERS(P_ID),
FOREIGN KEY(TRAIN_ID) REFERENCES TRAINS(TRAIN_ID), FOREIGN KEY(ROUTE_ID) REFERENCES TRAINS_ROUTES(ROUTE_ID));

INSERT INTO TRAINS(TRAIN_ID, TRAIN_NAME, TRAIN_SPEED, TRAIN_CABINS) VALUES
(1,'Express 101',120,5),(2,'Rapid 202',150,8),(3,'Local 303',80,3);

INSERT INTO TRAINS_ROUTES(ROUTE_ID, DEPARTURE, DESTINATION, DISTANCE) VALUES
(1,'LAHORE', 'MULTAN', 250),(2,'FAISALABAD','LAHORE',150),(3,'MULTAN', 'KARACHI', 300),(4,'ISLAMABAD','LAHORE',200);

INSERT INTO TRAINS_ALLOCATION(TRAIN_ID, ROUTE_ID) VALUES
(1,1),(2,2),(3,3),(3,4);

INSERT INTO PASSENGERS(P_ID, P_NAME, P_CITY) VALUES
(1, 'AYESHA IMRAN', 'LAHORE'),(2, 'FATIMA AHMAD', 'FAISALABAD'), (3,'MUHAMMAD ABDULLAH','MULTAN'),(4,'UMER IKRAM','LAHORE'),
(5, 'AHMAD KHAN', 'ISLAMABAD'), (6, 'SARA ZAFAR', 'MULTAN'), (7, 'ASAD KHAN', 'ISLAMABAD'),(8, 'ALI REHMAN', 'KARACHI');

INSERT INTO BOOKINGS(BOOKING_ID, P_ID, TRAIN_ID, ROUTE_ID) VALUES
(101,1,1,1),(102,2,2,2),(103,3,3,3),(104,4,1,4),(105,5,2,4),(106,7,1,3),(107,8,2,4);

SELECT * FROM TRAINS;
SELECT * FROM TRAINS_ROUTES;
SELECT * FROM TRAINS_ALLOCATION;
SELECT * FROM PASSENGERS;
SELECT * FROM BOOKINGS;

SELECT * FROM TRAINS_ROUTES WHERE DISTANCE > (SELECT  AVG(DISTANCE) FROM TRAINS_ROUTES);

SELECT * FROM BOOKINGS WHERE BOOKING_ID%2=0; 

SELECT BI.BOOKING_ID AS BOOKING_IDs, P.P_NAME AS PASSENGER_NAME
FROM BOOKINGS BI LEFT JOIN PASSENGERS P ON BI.P_ID=P.P_ID;

SELECT TRAIN_NAME, AVG(TRAIN_SPEED) FROM TRAINS
GROUP BY TRAIN_ID
HAVING TRAIN_CABINS>6;

SELECT T.TRAIN_NAME, COUNT(B.BOOKING_ID) 
FROM TRAINS T LEFT JOIN BOOKINGS B ON
T.TRAIN_ID=B.TRAIN_ID
GROUP BY T.TRAIN_NAME;

SELECT B.*,P.P_NAME AS PASSENGER_NAMES FROM BOOKINGS B
LEFT JOIN PASSENGERS P ON B.P_ID=P.P_ID
WHERE P.P_NAME LIKE 'A%';

SELECT * 
FROM PASSENGERS 
WHERE P_ID NOT IN (SELECT P_ID FROM BOOKINGS)
GROUP BY P_ID;

DROP TABLE TRAINS_ALLOCATION CASCADE;
DROP TABLE BOOKINGS CASCADE;
