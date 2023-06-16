```sql 
CREATE TABLE students (
  Name VARCHAR(50),
  Surname VARCHAR(50),
  Age INT
);

INSERT INTO students (Name, Surname)
VALUES
  ('Okegbade', 'Oluwatobi'),
  ('Timothy', 'Taofeek'),
  ('Bankole', 'Soboyejo'),
  ('Ibrahim', NULL);

INSERT INTO students (Name, Surname)
SELECT 
  name,
 name 
FROM
  (
    SELECT 'Okegbade' AS name
    UNION ALL
    SELECT 'Oluwatobi'
    UNION ALL
    SELECT 'Timothy'
    UNION ALL
    SELECT 'Taofeek'
    UNION ALL
    SELECT 'Bankole'
    UNION ALL
    SELECT 'Soboyejo'
    UNION ALL
    SELECT 'Ibrahim'
  ) AS names
ORDER BY RAND()
LIMIT 10;

```