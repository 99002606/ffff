#include "supermarket.cc"
//#include "Genre.cpp"
#include "supermarketdb.cc"
#include <gtest/gtest.h>

#include<bits/stdc++.h>
namespace {

class supermarketdbtest : public ::testing::Test {

  protected:
    void SetUp() {
        items.additems("A", "Yangon",7,9.1, "750-67-8428",74.69);
       /* trips.addTrip("Bengaluru", "Pune", "6E501","Indigo", 500);
        trips.addTrip("Hyderabad", "Chennai", "AI850","AirIndia", 400);
        trips.addTrip("Mumbai", "Bengaluru","SG301",  "Spicejet", 600);
        trips.addTrip("Bengaluru", "Delhi", "SG302","Spicejet", 1200);
        trips.addTrip("Pune", "Bengaluru","AI900",  "AirIndia", 550);*/
    }
    void TearDown() {}
    supermarketdb items;
};
}

TEST_F(supermarketdbtest, AdditemsTest) {
    items.additems("A", "Yangon",7,9.1, "750-67-8428",74.69);
    EXPECT_NE((supermarket*)NULL, items.finddataById("750-67-8428"));
    //EXPECT_EQ(2, movies.countAll());
}
/*TEST_F(supermarketdbtest, RemoveitemsTest)
{
    items.removeitems("Yangon");
    EXPECT_EQ(NULL, items.finddataById("Yangon"));
    //EXPECT_EQ(0, movies.countAll());
}*/
/*TEST_F(MovieDbTest, RemoveMovieTest) {
    trips.removeMovie("Raj");
    EXPECT_EQ(NULL, movies.findMovieById(Raj"));
    EXPECT_EQ(1, movies.countAll());
}
TEST_F(FlightTripDbTest, CountTest) {             //Just After Setup
    EXPECT_EQ(6, trips.countAll());
}
TEST_F(FlightTripDbTest, CountByOperatorTest) {  //Just After Setup
    int count = trips.countTripsByOperator("Indigo");
    EXPECT_EQ(2, count);*/
   /* int main(int argc,char** argv)
{
testing::InitGoogleTest(&argc,argv);
return RUN_ALL_TESTS();

}*/
