#include <iostream>
#include <fstream>
#include <sdsl/wavelet_trees.hpp>
#include <sdsl/bit_vectors.hpp>
#include "TripleStore.hpp"
#include "RDFStorage.hpp"
#include <time.h>
#include <bitset>

using namespace sdsl;
using namespace std;

int main(int argc, char* argv[]) {

/*
    bit_vector b = {1,1,0,1,0,0,1};

    bit_vector a = bit_vector(10000, 0);
    for(auto i=0; i < a.size(); i += 1000){
        a[i] = 1;
    }

    rrr_vector<63> rrra(a);

    rrr_vector<63> rrrb;

    if(true){
        rrrb = rrr_vector<63>(a);
    }


    rrr_vector<>::rank_1_type rrrb_rank(&rrrb);


    cout << rrrb_rank(2001) << endl;

*/

    //store_to_file(rrra, "/Users/xu/Documents/Doctorat/git_workplace/triple_store/rrr_test.dt");

    /*
    wt_huff<> wt;
    construct_im(wt, "test_data/wavelet_trees.hpp", 1);
    store_to_file(wt,"wt_index-file.sdsl");
    cout << endl;
    cout << "number of lines  : " << wt.rank(wt.size(), '\n') << endl;
    cout << "first '=' in line: " << wt.rank(wt.select(1, '='),'\n')+1 << endl;
    */
    /*if (argc < 2) {
        return 1;
    }*/


    /*
    ofstream out;
    out.open("temp.tmp", std::ios::binary);
    unsigned long long p = 0b110011111000001111000;
    out.write((char*)&p, sizeof(unsigned long long));
    out.close();

    ifstream in;
    in.open("temp.tmp", std::ios::binary);

    bit_vector bv;
    cout << "Before load: " << bv.size() << endl;
    bv.load(in);
    cout << "After load: " << bv.size() << endl;
    size_t zeros = rank_support_v<0>(&bv)(bv.size());
    bit_vector::select_0_type b_sel(&bv);*/
    /*
    for (size_t i=1; i <= zeros; ++i)
        cout << b_sel(i) << " ";
    */

/*
    wt_hutu_int<rrr_vector<63>> wt;
    string input = "6   1000 1 4 7 3   18 6 3 ";
    construct_im(wt, input, 'd');
    store_to_file(wt,"wt_index-file.sdsl");
    std::ofstream out("wt_index-file.sdsl.html");
    write_structure<HTML_FORMAT>(wt,out);
    cout << "size: " << wt.size() << "\n";
    cout << wt[0] << "\n";
    for (size_t i=0; i < wt.size(); ++i)
        cout << wt[i] << " ";
    cout << endl;
    cout << endl;
    //cout << "first '=' in line: " << wt.rank(wt.select(1, '='),'\n')+1 << endl;

*/
/*
    vector<long> p = {1,1,1,1,1,1,2,2,2,2,3,3,3,3,3,3,4};
    vector<long> s = {1,1,3,3,3,4,2,2,4,4,1,3,3,4,4,4,3};
    vector<long> o = {1,2,1,2,3,1,1,2,1,2,1,1,2,1,2,3,1};

    TripleStore pso(p,s,o);

    vector<long> results = pso.look_up_ele2(5,8);
    for(long i:results){
        cout << i << " ";
    }
    cout << '\n' << "\n" ;

    vector<long> results2 = pso.look_up_ele0(3,8);
    for(long i:results2){
        cout << i << " ";
    }
    cout << '\n' << "\n" ;

    vector<long> results3 = pso.look_up_ele1(8,8);
    for(long i:results3){
        cout << i << " ";
    }
    cout << '\n' << "\n" ;

    vector<tuple<long,long>> results4 = pso.look_up_ele12(8);
    cout << "ele1" << " " << "ele2" << "\n";
    for(auto i:results4){
        cout << std::get<0>(i) << " " << std::get<1>(i) << "\n";
    }
    cout << '\n' << "\n" ;

    vector<tuple<long,long>> results5 = pso.look_up_ele01(8);
    cout << "ele0" << " " << "ele1" << "\n";
    for(auto i:results5){
        cout << std::get<0>(i) << " " << std::get<1>(i) << "\n";
    }
    cout << '\n' << "\n" ;

    vector<tuple<long,long>> results6 = pso.look_up_ele02(8);
    cout << "ele0" << " " << "ele2" << "\n";
    for(auto i:results6){
        cout << std::get<0>(i) << " " << std::get<1>(i) << "\n";
    }
    cout << '\n' << "\n" ;

    vector<tuple<long,long,long>> results7 = pso.look_up_ele012();
    cout << "ele0" << " " << "ele1" << " " << "ele2" << "\n";
    for(auto i:results7){
        cout << std::get<0>(i) << " " << std::get<1>(i) << " " << std::get<2>(i) << "\n";
    }
    cout << '\n' << "\n" ;
*/



    if(argc < 4){
        cout << "Usage: triple_store data_path query_path storage_path tbox_path reason show_result" << endl;
        exit(1);
    }


/*
    char* data_path = "./test_data/lubm1.ttl";
    char* query_path = "./test_query/lubm_query.sparql";
    char* storage_path = "./store/lubm";
    char* tbox_path = "./test_tbox/";

    bool reason = true;
    bool show_result = false;

*/


    char* data_path = argv[1];
    char* query_path = argv[2];
    char* storage_path = argv[3];
    char* tbox_path = argv[4];
    char* str_reason = argv[5];
    char* str_show_result = argv[6];

    bool reason = (str_reason[0] == 't' || str_reason[0] == 'T')? true:false;
    bool show_result = (str_show_result[0] == 't' || str_show_result[0] == 'T')? true:false;



    clock_t start, end;

    ifstream abox_file;
    //Users/xu/Documents/Doctorat/git_workplace/triple_store/test_data/data.nt
    //Users/xu/Documents/Doctorat/git_workplace/triple_store/test_ABOX.nt


    abox_file.open(data_path);

    if(!abox_file){
        cerr << "open file error!" << endl;
        exit(1);
    }
    start = clock();

    string str_tbox(tbox_path);

    RDFStorage test(str_tbox, abox_file, PSO);
    end = clock();
    test.set_reason(reason);
    test.set_show_results(false);

    test.store_to_disk(storage_path);



    cout << "Database constructed! " << (double)(end - start)/CLOCKS_PER_SEC << " s" << endl << endl;

    abox_file.close();

    ifstream query_file;

    query_file.open(query_path);



    vector<string> query_strings;


    while(!query_file.eof()){
        string tmp;
        getline(query_file, tmp);
        cout << tmp << endl;
        if(tmp[0] == '\t')
            query_strings.push_back(tmp);
        else if(tmp[0] == '}'){
            JoinVariables variables;
            list<JoinLine> res_table;
            start = clock();
            tie(variables, res_table) = test.query_graph_pattern(query_strings);
            end = clock();

            cout << "Query time: " << (double)(end - start)/CLOCKS_PER_SEC*1000 << " ms" << endl << endl;





            if(show_result){
                variables.print_all();
                cout << endl;

                for(auto i: res_table){

                    vector<ID_TYPE> vec_ins = i.get_vector_of_id(INS);
                    for(auto j: vec_ins){
                        cout << test.look_up_id_instance(j) << " ";
                    }

                    vector<ID_TYPE> vec_pro = i.get_vector_of_id(PRO);
                    for(auto j: vec_pro){
                        cout << test.look_up_id_property(j) << " ";
                    }

                    vector<ID_TYPE> vec_con = i.get_vector_of_id(CON);
                    for(auto j: vec_con){
                        cout << test.look_up_id_concept(j) << " ";
                    }
                    cout << endl;
                }
            }

            cout << endl << endl;
            query_strings.clear();
        }
    }




/*
    query_strings.push_back("?v0 <http://db.uwaterloo.ca/~galuc/wsdbm/subscribes> <http://db.uwaterloo.ca/~galuc/wsdbm/Website174> .");
    query_strings.push_back("?v0 <http://db.uwaterloo.ca/~galuc/wsdbm/likes> ?v2 .");
    query_strings.push_back("?v2 <http://schema.org/caption> ?v3 .");

    //query_strings.push_back("?v4 <http://db.uwaterloo.ca/~galuc/wsdbm/makesPurchase> ?v5 .");
    //query_strings.push_back("?v5 <http://db.uwaterloo.ca/~galuc/wsdbm/purchaseDate> ?v6 .");
    //query_strings.push_back("?v5 <http://db.uwaterloo.ca/~galuc/wsdbm/purchaseFor> ?v0 .");



    vector<string> variables;
    vector<vector<ID_TYPE>> res_table;
    tie(variables, res_table) = test.query_graph_pattern(query_strings);

    for(auto i: variables){
        cout << i << " ";
    }
    cout << endl;
    for(auto i: res_table){
        for(auto j: i){
            cout << test.look_up_id_instance(j) << " ";
        }
        cout << endl;
    }
*/

    /*
    string str;
    cout << "Input triple pattern: S P O: " << endl;
    while(getline(cin, str, '\n')){
        if(str == "exit")
            return 0;
        stringstream input(str);
        string subject, predicate, object;
        input >> subject >> predicate >> object;
        vector<vector<ID_TYPE>> results;
        vector<string> variables;
        tie(variables, results) = test.query_triple_pattern(subject, predicate, object);
        cout << variables.size() << " " << results.size() << endl;
        cout << "Input triple pattern: S P O:" << endl;
    }
    */

    /*
    vector<vector<ID_TYPE >> table_a = {{1,2,3},{1,5,6},{7,2,9},{10,11,6}};
    vector<vector<ID_TYPE >> table_b = {{1,1},{7,7},{10,2}};
    vector<string> var_a = {"a","b","c"};
    vector<string> var_b = {"a","d"};
    JoinResults res(table_a, var_a);
    JoinResults res2(table_b, var_b);
    res.join(res2);
    res.print_ele();
    */

    return 0;
}
