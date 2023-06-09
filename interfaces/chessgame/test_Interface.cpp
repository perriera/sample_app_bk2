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
#include <sample_app/game/interface.hpp>

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

namespace sample {
    namespace app {
        namespace game {

            void test(Interface& i) {

                /**
                 * @brief mold the interface
                 *
                 */
                i.moves();
                REQUIRE(i.exists() == true);
                REQUIRE(i.piece(1, 2) == true);
                REQUIRE(i.zone(0, 0) == false);
                REQUIRE(i.zone(1, 0) == false);
                REQUIRE(i.zone(0, 1) == false);

            }
        }
    }
}


