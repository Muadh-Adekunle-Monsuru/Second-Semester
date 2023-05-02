To create a simple API that communicates with a PHP database, you will need to follow these steps:

1. **Create a database and table.** You can use any database management system (DBMS) you like, such as MySQL, PostgreSQL, or SQLite. For this example, we will use MySQL.

2. **Create a PHP file to connect to the database.** This file will contain the code that connects to the database and performs queries.

3. **Create a PHP class to represent the database table.** This class will contain the methods that are used to interact with the table.

4. **Create a PHP function to create an API endpoint.** This function will accept a request from a client and return the results of the query.

5. **Test the API.** You can use a tool like Postman to test the API.

Here is an example of a simple API that communicates with a PHP database:

```php
<?php

// Create a database connection
$db = new PDO('mysql:host=localhost;dbname=my_database', 'username', 'password');

// Create a class to represent the database table
class MyTable {

    public function __construct($db) {
        $this->db = $db;
    }

    public function getRows() {
        $sql = 'SELECT * FROM my_table';
        $stmt = $this->db->prepare($sql);
        $stmt->execute();
        $rows = $stmt->fetchAll();
        return $rows;
    }

}

// Create an API endpoint
function getMyTable() {
    $table = new MyTable($db);
    $rows = $table->getRows();
    return $rows;
}

// Test the API
$response = getMyTable();
var_dump($response);
```

This API will return all the rows from the `my_table` table. You can use this API to create a simple web application or mobile app.