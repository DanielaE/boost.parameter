
#include <boost/parameter.hpp>

#ifdef BOOST_MSVC
# pragma warning(disable: 4003) // not enough actual parameters for macro
#endif

BOOST_PARAMETER_NAME(graph)

BOOST_PARAMETER_FUNCTION((void), f, tag,
(required (graph, *) )
) {}

