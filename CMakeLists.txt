cmake_minimum_required(VERSION 3.14)
project(succinct_edge)

set(CMAKE_CXX_STANDARD 14)

include_directories(/usr/local/include)
link_directories(/usr/local/lib)
link_libraries(sdsl divsufsort divsufsort64)
add_executable(succinct_edge main.cpp TripleStore.cpp TripleStore.hpp RDFStorage.cpp RDFStorage.hpp Dictionary.cpp Dictionary.hpp RankBaseElement.cpp RankBaseElement.hpp Util.hpp RDFTypeStore.cpp RDFTypeStore.hpp Constant.hpp quickSortTS.hpp TriplePattern.cpp TriplePattern.hpp LiteMatDictionary.cpp LiteMatDictionary.hpp JoinLine.cpp JoinLine.hpp JoinVariables.cpp JoinVariables.hpp JoinTable.cpp JoinTable.hpp QueryEngine.cpp QueryEngine.hpp BitMap.cpp BitMap.hpp)
