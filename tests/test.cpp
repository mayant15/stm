#include "doctest.h"
#include "stm.h"

TEST_CASE("testing start_tx")
{
    CHECK(stm::start_tx());
}
