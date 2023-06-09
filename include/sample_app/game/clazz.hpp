/**
 * @file ChessGame.hpp
 * @author Perry Anderson (perry@exparx.ca)
 * @brief Sample Header file
 * @version 0.1
 * @date 2021-11-30
 *
 * @copyright © 2023 Perry Anderson, (perry@exparx.ca)
 * @ref https://github.com/perriera
 *
 */

#ifndef _SAMPLE_APP_CHESSGAME_CLAZZ_HPP
#define _SAMPLE_APP_CHESSGAME_CLAZZ_HPP

 /**
  * @brief The MIT License (MIT)
  * @copyright © 2023 Perry Anderson, (perry@exparx.ca)
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

namespace sample {
    namespace app {
        namespace game
        {

            /**
             * @brief ChessGame
             *
             */
            concrete class Instance implements Interface
            {

                int _x = 0, _y = 0;

            public:

                /**
                 * construct ChessGame
                 */
                Instance(int x, int y) : _x(x), _y(y)
                {

                    /**
                     *   this shows how assertions can be used to
                     *   centralize conditions that cause exceptions
                     *   in one place
                     */
                    game::EndOfGameReachedException::assertion(
                        _x, _y, "sample", __INFO__);

                }

                /**
                 * @brief moves()
                 * @return all the chess moves of the given chess game
                 */
                virtual void moves() const override {}
                virtual bool exists() const override { return true; }
                virtual bool piece(int, int) const override { return true; }
                virtual bool zone(int, int) const override { return false; }

            };

        }
    } // end namespace 
}

#endif // _SAMPLE_APP_CHESSGAME_CLAZZ_HPP
