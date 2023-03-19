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
the $geom_point()$ can be changed to $geom_line()$ or geom_histogram(binwidth = 1)

addint new column
```R
[filename] <- [filename] %>%
mutate([newcolumn] = {expression})
```

filter data:
```c
[newfilename] <- [oldfilename] %>% 
filter([column1]=="criteria", [column2] == "criteria" )

```
Summaries;

```R
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
```R
sfo_feb_flights %>% 
+     group_by(carrier) %>%
+     summarise(meandd=mean(arr_delay), middle = median(arr_delay), iqr = IQR(arr_delay), n = n())
```


```R
kobe_streak <- calc_streak(kobe_basket$shot)
```

finding area under curve using R
```R
pnorm(1800, mean = 1500, sd = 3000)
```

Finding combinations in R uses the choose function
```R
choose(n,k)
```

Calculating binomials using R
```R
dbinom(k,size = n, p = probability_of_success)
```
for finding binomial probability above and equal to a number
```R
sum(dbinom(k:n, size = n , p = probability_of_success))
``` 