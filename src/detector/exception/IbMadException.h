/*
 * Copyright (C) 2018 Heinrich-Heine-Universitaet Duesseldorf,
 * Institute of Computer Science, Department Operating Systems
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#ifndef DETECTOR_IBMADEXCEPTION_H
#define DETECTOR_IBMADEXCEPTION_H

#include <exception>
#include <string>
#include "IbPerfException.h"

namespace Detector {

/**
 * An exception, which signalises an error during an ibmad-operation.
 *
 * @author Fabian Ruhland, Fabian.Ruhland@hhu.de
 * @date July 2018
 */
class IbMadException : public IbPerfException {

public:

    /**
     * Constructor.
     *
     * @param message Error message
     */
    explicit IbMadException(const std::string &message) noexcept :
            IbPerfException("Error while performing a MAD operation: " + message) {

    }

    /**
     * Destructor.
     */
    ~IbMadException() override = default;
};

}

#endif
