# 3-oji-uzduotis-OP
# Eksperimentiniai Vector klasės tyrimai

## 1. Funkcijų palyginimas su std::vector

### Naudotos funkcijos : assign(), pop_back(), push_back(), reserve(), erase(), capacity(), size()

#### std::vector rezultatai:

``` shell
Normal vector results:
Normal vector assign 10 10 10       
Normal vector pop_back 10 10        
Normal vector push_back 10 10 4     
Normal vector before reserve 3      
Normal vector after reserve 20      
Normal vector before erase 3        
Normal vector after erase 0
```
#### Vector rezultatai:

``` shell
Experimental vector results:        
Experimental vector assign 10 10 10 
Experimental vector pop_back 10 10  
Experimental vector push_back 10 10 4
Experimental vector before reserve 3
Experimental vector after reserve 20
Experimental vector before erase 3
Experimental vector after erase 0
```
### Išvada: Kadangi funkcijos grąžina tus pačius rezultatus tai reiškia, jog Vector veikia taip pat kaip std::vector
## 2. Spartos analizė

std::vector                    |  10000  | 100000 | 1000000 | 10000000 | 100000000 |
-------------------------------|--------|-------|--------|---------|----------|
Int tipo elementų įrašymas     | 0  | 0.001994| 0.013963  |  0.137631  |   1.30152  |

VECTOR                        |  10000 | 100000 | 1000000 | 10000000 | 100000000 |
------------------------------|--------|-------|--------|---------|----------|
Int tipo elementų įrašymas    | 0  | 0.001994 | 0.013963  |  0.159544  |   1.45411  |

## 3. Atminties perskirstymai užpildant 100000000 elementų

### std::vector 27 kartus
### Vector 27 kartus


