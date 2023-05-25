### Traditional File Processing System
Manual System -> File System -> DBMS
**Manual System** 
File system was an early attempt to computerize the manual systems which were prevalent in the early days of data processing. The manual system works well when their are not many items. But it breaks down when we have lots of items and we want to cross reference(search for a specific data) them. 

**Traditional File System** 
Files system was a response for the need for more efficient data management i.e creating, organizing, storing, analyzing, processing, manipulating. Rather than having everything centralized, each departments or units within an organization would have own set of file. 
For example, a university computer system that handles student's information, if the student data are to be kept independently by the units, that each students interact with, hostel, registry, clinic, busrary, student affairs, library. Each department/unit is allowed to keep student information independently in their data processing application. A time will come when multiple files containing the same records of students will exist in different units. 

This means that whenever the university is in need of any student information, the university can collect the same information in more than one file, this can result into problems lack of data integrity, lack of program data dependence, inflexibility and inability to share data among applications. 

**Data Redundancy:**
This means the precence of duplicate data in multiple data files and they can often be in difference format. These is of the result of when different departments/units are allowed to collect the same data about an object. Because it is collected and maintained in so many deparments the same data items may be repeated in different departments. 

1. Wasted storage space
2. Time is spent in updating the record

**Program data dependence:** Program-Data Dependence is the tight relationship between data stored in files and the applications  that processes the information in the files. Would also mean change in the program that processes it. 

**Difficult of Data-sharing**: It is difficult to share data in a file environment because it may be difficult to relate the data in one file with that of another within one or several departments were files are kept.

In addition, there is no control over the access to data which makes it further more difficult to retrieve the desired information. In other words a database is a collection of data organized to serve many applications efficiently by centralizing the data and minimizing redundant data. 

DBMS database management system is a software that define a database, stores the data, support query language produces report that creates a data entry screen, it is complex program that controls the organization, storage, management and retrieval of data in a database to help resolve the challenges of building data processing applications.  It acts as an interface between application programs and datafiles

A database is a collection of related file systems.  And a filesystem can contain more than one file. 

When the application program calls for a data item such as student matric number the DBMS finds the item in the database and presents it to the application program
