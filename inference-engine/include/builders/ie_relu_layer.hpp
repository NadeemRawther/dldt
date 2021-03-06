// Copyright (C) 2018 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include <builders/ie_layer_fragment.hpp>
#include <ie_inetwork.hpp>
#include <string>

namespace InferenceEngine {
namespace Builder {

/**
 * @brief The class represents a builder for ReLU layer
 */
class INFERENCE_ENGINE_API_CLASS(ReLULayer): public LayerFragment {
public:
    /**
     * @brief The constructor creates a builder with the name
     * @param name Layer name
     */
    explicit ReLULayer(const std::string& name = "");
    /**
     * @brief The constructor creates a builder from generic builder
     * @param genLayer generic builder
     */
    explicit ReLULayer(Layer& genLayer);
    /**
     * @brief Sets the name for the layer
     * @param name Layer name
     * @return reference to layer builder
     */
    ReLULayer& setName(const std::string& name);

    /**
     * @brief Returns port with shapes for the layer
     * @return Port with shapes
     */
    const Port& getPort() const;
    /**
     * @brief Sets port shapes for the layer
     * @param port Port with shapes
     * @return reference to layer builder
     */
    ReLULayer& setPort(const Port& port);

    /**
     * @brief Returns negative slope
     * @return Negative slope
     */
    float getNegativeSlope() const;
    /**
     * @brief Sets negative slope
     * @param negativeSlope Negative slope
     * @return reference to layer builder
     */
    ReLULayer& setNegativeSlope(float negativeSlope);
};

}  // namespace Builder
}  // namespace InferenceEngine
