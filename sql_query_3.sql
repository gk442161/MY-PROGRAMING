Database changed
mysql> show tables;
+-------------------------+
| Tables_in_s2_employe_25 |
+-------------------------+
| company                 |
| employee                |
| manages                 |
| work                    |
+-------------------------+
4 rows in set (0.00 sec)

mysql> select* from work;
+---------+-----------+--------+
| empname | c_name    | salary |
+---------+-----------+--------+
| naruto  | deathnote |   3200 |
| light   | dell      |   6544 |
| rahul   | timex     |   6788 |
| gaurav  | somaiya   |   9890 |
| shubham | haldiram  |   2300 |
+---------+-----------+--------+
5 rows in set (0.00 sec)

mysql> select* from employee;
+---------+-----------+---------+------------+
| empname | street    | city    | d_of_j     |
+---------+-----------+---------+------------+
| naruto  | M.P ROAD  | thane   | 2011-09-12 |
| gaurav  | KARJAT R. | thane   | 2001-06-14 |
| light   | shinigami | tokyo   | 2012-12-19 |
| shubham |           | tarapur | 2001-08-03 |
| rahul   | MILIT. R. | mumbai  | 2016-10-23 |
| apoorva | NULL      | thane   | 2008-07-29 |
| baka    |           | mumbai  | 2018-01-09 |
+---------+-----------+---------+------------+
7 rows in set (0.00 sec)

mysql> select* from manages;
+--------------+------+------+
| manager_name | mid  | eid  |
+--------------+------+------+
| light        | NULL | NULL |
| rahul        | NULL | NULL |
| shubham      |    4 |    3 |
| rahul        |    3 |    4 |
+--------------+------+------+
4 rows in set (0.02 sec)

mysql> select* from company;
+-----------+---------+
| c_name    | c_city  |
+-----------+---------+
| deathnote | tokyo   |
| dell      | mumbai  |
| haldiram  | thane   |
| somaiya   | mumbai  |
| timex     | tarapur |
+-----------+---------+
5 rows in set (0.00 sec)

mysql> select count(*) from work where salary>4000;
+----------+
| count(*) |
+----------+
|        3 |
+----------+
1 row in set (0.00 sec)
ysql> select avg(salary) from work 
    -> ;
+-------------+
| avg(salary) |
+-------------+
|      5744.4 |
+-------------+
1 row in set (0.00 sec)
mysql> select distinct(salary) from work;
+--------+
| salary |
+--------+
|   3200 |
|   6544 |
|   6788 |
|   9890 |
|   2300 |
+--------+
5 rows in set (0.00 sec)
mysql> select empname from work where salary between 3200 and 6000;
+---------+
| empname |
+---------+
| naruto  |
+---------+
1 row in set (0.00 sec)

mysql> select empname from work
    -> where salary in
    -> (select salary from work where salary>6000);
+---------+
| empname |
+---------+
| light   |
| rahul   |
| gaurav  |
+---------+
3 rows in set (0.02 sec)
mysql> select empname from employee where city in (select city from employee group by city having count(city)>2);
+---------+
| empname |
+---------+
| naruto  |
| gaurav  |
| apoorva |
+---------+
3 rows in set (0.00 sec)
mysql> select empname from employee where city in (select city from employee group by city having count(city)>2) order by empname;
+---------+
| empname |
+---------+
| apoorva |
| gaurav  |
| naruto  |
+---------+
3 rows in set (0.00 sec)

