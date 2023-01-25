# Write your MySQL query statement below

SELECT Email
from Person
GROUP BY Email
having count(Email) >1;
