To load data from a link use the
```c
source("http://www.openintro.org/stat/data/arbuthnot.R")
```

load every library needed at the beggining of each run
```c
library(dplyr)
library(ggplot2)
library(statsr)
```

to view data
```c
view([filename])
```
To view data from each column
```c
[filename]$[columname]
```
to plot data
```c
ggplot(data = [filename], aes(x=[x-axis], y = [y-axis])) + 
geom_point()
```
the $geom_point()$ can be changed to $geom_line()$

addint new column
```c
[filename] <- [filename] %>%
mutate([newcolumn] = {expression})
```

filter data:
```c
[newfilename] <- [oldfilename] %>% 
filter([column1]=="criteria", [column2] == "criteria" )

```
Summaries;

```c
[filename] %>%
group_by([criteria]) %>%
summarise([name] = mean([columnname]), [name] = sd([columname2], n = n() ))


-   `mean`
-   `median`
-   `sd`
-   `var`
-   `IQR`
-   `range`
-   `min`
-   `max`
```
	eg
```c
sfo_feb_flights %>% 
+     group_by(carrier) %>%
+     summarise(meandd=mean(arr_delay), middle = median(arr_delay), iqr = IQR(arr_delay), n = n())
```