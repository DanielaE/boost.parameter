
#include <boost/parameter.hpp>

#ifdef BOOST_MSVC
# pragma warning(disable: 4003) // not enough actual parameters for macro
#endif

BOOST_PARAMETER_NAME(arg1)
BOOST_PARAMETER_NAME(arg2)
using namespace boost::parameter;
struct callable2
{
    BOOST_PARAMETER_CONST_MEMBER_FUNCTION(
        (void), call, tag, (required (arg1,(int))(arg2,(int))))
    {
        call_impl(arg1,arg2);
    }
 private:
    void call_impl(int, int); // implemented elsewhere.
};
