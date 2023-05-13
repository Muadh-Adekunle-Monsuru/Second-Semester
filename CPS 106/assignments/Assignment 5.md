[02/05/2023]
How files are created, accessed  on cloud storage.

-   When you create a file on cloud storage, the file is first uploaded to a central server. 
-   The central server then breaks the file up into smaller pieces, called chunks.
-   The chunks are then stored on multiple servers, which are located all over the world. This process is called **replication**. Replication helps to ensure that your files are always available, even if one server fails. Once your files have been replicated, they are then stored in a **bucket**. A bucket is a logical container for your files. You can create multiple buckets to organize your files.
-   When you access a file on cloud storage, the cloud storage provider will retrieve the chunks from the servers and reassemble them into the original file. The cloud storage provider will also keep track of who has access to your files. You can control who has access to your files by setting permissions.