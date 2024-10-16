# Digital_Design_Verilog
When designing adder and subtractor, i encounter 3 type of overflow, that is 
(1) two positive number addition results in a large number that can't be represented by 32 bits
(2) two negative number addition results in a small number that can't be represented by 32 bits
(3) when something minus the smallest nagetive number, then the resulted number will be too large to be represented by 32 bits
However, in RV32I ,we do not need to implement addtional hardware to tell the above :mksession ~/mysession.vimoverflow.

