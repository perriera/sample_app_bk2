/**
 * @brief The MIT License (MIT)
 * @copyright © 2023 Perry Anderson, (perry@exparx.ca)
 * @ref https://github.com/perriera
 *
 * Permission  is  hereby  granted, free  of  charge, to  any person  obtaining
 * a copy of this software and associated documentation files (the “Software”),
 * to deal in the Software  without restriction,  including  without limitation
 * the rights to  use,  copy,  modify,  merge, publish, distribute, sublicense,
 * and/or sell  copies of the  Software,  and  to  permit  persons  to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice  and this permission  notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS  PROVIDED “AS IS”,  WITHOUT WARRANTY  OF ANY  KIND,  EXPRESS
 * OR IMPLIED,  INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR  PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR  COPYRIGHT HOLDERS BE  LIABLE FOR ANY  CLAIM,  DAMAGES  OR  OTHER
 * LIABILITY,  WHETHER IN  AN ACTION  OF CONTRACT,  TORT OR  OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *
 */

#include <iostream>
#include <sample_app/game/clazz.hpp>

#include "../../test/vendor/catch.hpp"

using namespace sample;
using namespace sample::app;

/**
 *    Mold<cpp::app::game::Interface> dock;
 *
 *    (aka. mold the cpp::ChessGame interface to this dock)
 *
 *    this is a very simple dock/mold for the purpose
 *    of showing how parameters can be passed to methods
 *    and how dock/molds can be used in their simplist
 *    form and execution.
 *
 *    for a more complete examples of dock/molds see
 *    the (perrier) extras framework
 *
 */
SCENARIO("Dock app::game::Interface", "[app::game::Interface]") {

    /**
     *    Steps 1. Mold the Interface to a dock
     *          2. dock methods of interest
     *          3. supply a reference to that dock
     *
     */

    app::game::Instance dock(1, 2);
    app::game::Interface& i = dock;

    test(i);

    REQUIRE_THROWS_AS(
        app::game::Instance(0, 0), game::EndOfGameReachedException);

    REQUIRE_THROWS_AS(
        game::EndOfGameReachedException::assertion(
            0, 0, "sample", __INFO__), game::EndOfGameReachedException);

}

