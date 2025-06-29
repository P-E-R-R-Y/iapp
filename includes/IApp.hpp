/**
 * @file IApp.hpp
 * @author Perry Chouteau (perry.chouteau@outlook.com)
 * @brief
 * @date 2025-06-29
 */

#ifndef IAPP_HPP_
    #define IAPP_HPP_

    class IApp {
        public:
            virtual ~IApp() = default;
            virtual int start() = 0;
    };

#endif /* IAPP_HPP_ */