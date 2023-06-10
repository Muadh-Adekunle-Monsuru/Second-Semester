SQL means Structured Query Language
ANSI: American National Standard Institute
SQL is used for querying, modifying and managing RDBMs

**Categories of SQL Statements**
- DML
- DDL
- DCL : Data Control Language
- Transaction Control


DML used to: 
	- Retrieve data from database
	- Enter new rows
	- Changes existing rows
	- Remove unwanted rows 
	- Delete 
	- Update
The language include:
	- select
	- insert
	- update
	- delete 
	- merge

DDL: It sets up, changes and removes data structures from tables
Include:
- Create
- Alter
- Drop
- Rename
- Truncate

DCL: Gives or removes access rights to both a database and the structures within it. 
Include:
- Grant
- Revoke

TC(Transaction Control): Manages the changes made by the DML statements. Changes to the data can be grouped together into logical transactions.  
- Commit
- Rollback
- Savepoint


SQL is not case sensitive unless indicated by program. SELECT = select.
they can be entered on one line or separate lines.
```SQL
Select * from Students where fname = 'Adegunwa'
or
Select * from Students
	where fname = 'Adegunwa'
```

Clauses are ususally placed on separate lines for readability. 
indents should used to make the code readable
Keywords are typically entered in upper case while all other words such tablename are entered in lowwer case. 

Writing Basic SQL statements
1. **SQL SELECT:** used for projection(choosing columns in a table that one wants to return by the query),selection(choosing rows in a table to be returned by a query), Joining(Used to bring together data that is stored in different tables)

Syntax:
```SQL
*: means all
SELECT *: MEANS SELECT ALL 
WHERE: USED TO FILTER BASED ON A CRITERIA

SELECT [columname] FROM [TABLENAME] WHERE [COLUMN-NAME] OPERATOR VALUE

DISTINCT 
```

---
## Field Names
- Matric Number
- First Name
- Last Name 
- Surname
- Year of Birth
- Gender
- GPA
- Hostel Name
- Room Name
- Address
- Phone Number


#### Lectures Table
