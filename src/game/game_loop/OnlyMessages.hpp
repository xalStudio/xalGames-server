#pragma once

#include "GameLoop.hpp"

namespace xal { namespace game { namespace game_loop {
    class OnlyMessages: public GameLoop {
    public:
        OnlyMessages() = default;

        void run(GameLoop::RunFunction runFunction) override;

    private:
        uint   m_ticks = 60;
        double m_TPS = 1.f / m_ticks;
    };
} } }