SELECT max(Salary) 
as SecondHighestSalary
FROM Employee
WHERE Salary < (SELECT max(Salary) FROM Employee) 



/*select max(salary) from Employee 
where salary < ( select max(salary) from Employee);*/