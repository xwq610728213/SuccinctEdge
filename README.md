# SuccinctEdge

## Compile

    cmake ./

CMake version 3.14 is required. [Succinct Data Structure Library(sdsl)](https://github.com/simongog/sdsl-lite), which is required for compilation, already exists in `lib` and `ìnclude`, if there is a problem, please install manually. <br>

    make
    
An executable file named `succinct_edge` will be generated.

## Run the test

The execution command is in the form of:

    ./succinct_edge data_path query_path persist_path tbox_path reasoning show_result


To conduct a test for lubm1 with RDFS reasoning:
        
    ./succinct_edge test_data/lubm1.ttl test_query/lubm_query.sparql store/lubm test_tbox/ true false

To conduct a test for a small test data without reasoning:
        
    ./succinct_edge test_data/smallDataExample.nt test_query/small_data_query.sparql store/small_data_example test_tbox/ false false
        
The `show_result` parameter can be changed aiming at showing all the results in terminal.
