```sql
-- Create a table to store the random names
CREATE TABLE RandomNames (
    matricnumber VARCHAR(20),
    first_name VARCHAR(50),
    last_name VARCHAR(50),
    year_of_birth INT,
    gender VARCHAR(10),
    hostel_name VARCHAR(50),
    room_number VARCHAR(3),
    address VARCHAR(100),
    phone_number VARCHAR(20),
    hobby VARCHAR(50)
);

-- Sample data for first names, last names, and hobbies
WITH Names AS (
    SELECT 'OLAIFA' AS first_name UNION ALL
    SELECT 'FARIDA' UNION ALL
    SELECT 'DAMILOLA' UNION ALL
    SELECT 'Bamigboye' UNION ALL
    SELECT 'Tolulope' UNION ALL
    SELECT 'Lillian' UNION ALL
    SELECT 'Lawal' UNION ALL
    SELECT 'Teslem' UNION ALL
    SELECT 'Adeleke' UNION ALL
    SELECT 'Bello' UNION ALL
    SELECT 'Faidat' UNION ALL
    SELECT 'Okegbade' UNION ALL
    SELECT 'Oluwatobi' UNION ALL
    SELECT 'Timothy' UNION ALL
    SELECT 'Taofeek' UNION ALL
    SELECT 'Bankole' UNION ALL
    SELECT 'Soboyejo' UNION ALL
    SELECT 'Ibrahim' UNION ALL
    SELECT 'Toluwalase' UNION ALL
    SELECT 'Balogun' UNION ALL
    SELECT 'Mariam' UNION ALL
    SELECT 'Adunni' UNION ALL
    SELECT 'Olalekan' UNION ALL
    SELECT 'Abdul' UNION ALL
    SELECT 'Khaliq' UNION ALL
    SELECT 'ANIFOWOSE' UNION ALL
    SELECT 'AMINAT' UNION ALL
    SELECT 'KOFOWOROLA' UNION ALL
    SELECT 'SOBOWALE' UNION ALL
    SELECT 'ESTHER' UNION ALL
    SELECT 'TEMITOPE' UNION ALL
    SELECT 'Muraina' UNION ALL
    SELECT 'Abdulramon' UNION ALL
    SELECT 'Opeyemi' UNION ALL
    SELECT 'Olaogun' UNION ALL
    SELECT 'Alimot' UNION ALL
    SELECT 'oluwafeyikemi' UNION ALL
    SELECT 'Suleiman' UNION ALL
    SELECT 'Khairat'
),
Addresses AS (
    SELECT 'Awolowo Road, Lagos' AS address UNION ALL
    SELECT 'Ahmadu Bello Way, Kaduna' UNION ALL
    SELECT 'Murtala Muhammed Way, Lagos' UNION ALL
    SELECT 'Ladoke Akintola Avenue, Ibadan' UNION ALL
    SELECT 'Tunde Idiagbon Crescent, Abuja' UNION ALL
    SELECT 'Shehu Shagari Road, Sokoto' UNION ALL
    SELECT 'Goodluck Jonathan Street, Port Harcourt' UNION ALL
    SELECT 'Muhammadu Buhari Street, Kano'
),
Hobbies AS (
    SELECT 'Reading' AS hobby UNION ALL
    SELECT 'Cooking' UNION ALL
    SELECT 'Gardening' UNION ALL
    SELECT 'Photography' UNION ALL
    SELECT 'Sports' UNION ALL
    SELECT 'Painting' UNION ALL
    SELECT 'Music' UNION ALL
    SELECT 'Dancing' UNION ALL
    SELECT 'Traveling'
)

-- Insert random names into the table
INSERT INTO RandomNames (
    matricnumber,
    first_name,
    last_name,
    year_of_birth,
    gender,
    hostel_name,
    room_number,
    address,
    phone_number,
    hobby
)
SELECT
    CONCAT('FUO/', FLOOR(RAND() * 4) + 19, '/', LPAD(FLOOR(RAND() * 601), 4, '0')) AS matricnumber,
    first_name,
    last_name,
    FLOOR(RAND() * 40) + 1980 AS year_of_birth,
    CASE WHEN RAND() < 0.5 THEN 'Male' ELSE 'Female' END AS gender,
    SUBSTRING(MD5(RAND()), 1, 10) AS hostel_name,
    LPAD(FLOOR(RAND() * 1000), 3, '0') AS room_number,
    address,
    CAST(RAND() * 9999999999 AS UNSIGNED) AS phone_number,
    hobby
FROM
    Names,
    Names AS last_names,
    Addresses,
    Hobbies
ORDER BY RAND()
LIMIT 10;

-- Retrieve the generated names
SELECT * FROM RandomNames;

```