// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-21 01:48:42.191005800 UTC

#pragma once

#include <cstddef>
#include <cstdint>

namespace cs2_dumper {
    namespace schemas {
        // Module: engine2.dll
        // Class count: 56
        // Enum count: 2
        namespace engine2_dll {
            // Alignment: 4
            // Member count: 3
            enum class EntityDormancyType_t : uint32_t {
                ENTITY_NOT_DORMANT = 0x0,
                ENTITY_DORMANT = 0x1,
                ENTITY_SUSPENDED = 0x2
            };
            // Alignment: 4
            // Member count: 4
            enum class EntityIOTargetType_t : uint32_t {
                ENTITY_IO_TARGET_INVALID = 0xFFFFFFFF,
                ENTITY_IO_TARGET_ENTITYNAME = 0x2,
                ENTITY_IO_TARGET_EHANDLE = 0x6,
                ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7
            };
            // Parent: None
            // Field count: 0
            namespace CEntityInstance {
            }
            // Parent: None
            // Field count: 0
            namespace CEntityComponent {
            }
            // Parent: None
            // Field count: 7
            namespace CScriptComponent {
                constexpr std::ptrdiff_t  = 0x80000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
            }
            // Parent: None
            // Field count: 0
            namespace CEntityIdentity {
            }
            // Parent: engine2
            // Field count: 7
            namespace EventClientPostSimulate_t {
                constexpr std::ptrdiff_t  = 0x80000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
            }
            // Parent: None
            // Field count: 0
            namespace EventSimpleLoopFrameUpdate_t {
            }
            // Parent: engine2
            // Field count: 7
            namespace EventPostAdvanceTick_t {
                constexpr std::ptrdiff_t  = 0x80000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
            }
            // Parent: None
            // Field count: 0
            namespace CEntityIOOutput {
            }
            // Parent: None
            // Field count: 0
            namespace EventClientSceneSystemThreadStateChange_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventClientOutput_t {
            }
            // Parent: xL_5__
            // Field count: 7
            namespace EventServerPostSimulate_t {
                constexpr std::ptrdiff_t  = 0x80000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
            }
            // Parent: None
            // Field count: 0
            namespace CEntityComponentHelper {
            }
            // Parent: None
            // Field count: 0
            namespace GameTime_t {
            }
            // Parent: xL_5__
            // Field count: 7
            namespace EventServerBeginSimulate_t {
                constexpr std::ptrdiff_t  = 0x80000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
            }
            // Parent: None
            // Field count: 0
            namespace EntityIOQueuePrioritizedEvent_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventServerEndAsyncPostTickWork_t {
            }
            // Parent: engine2
            // Field count: 0
            namespace EventClientAdvanceTick_t {
            }
            // Parent: None
            // Field count: 0
            namespace EntInput_t {
            }
            // Parent: None
            // Field count: 0
            namespace CNetworkVarChainer {
            }
            // Parent: engine2
            // Field count: 7
            namespace EventClientSimulate_t {
                constexpr std::ptrdiff_t  = 0x80000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
            }
            // Parent: None
            // Field count: 0
            namespace EventClientPostOutput_t {
            }
            // Parent: None
            // Field count: 0
            namespace GameTick_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventClientPollInput_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventPreDataUpdate_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventClientProcessGameInput_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventFrameBoundary_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventAppShutdown_t {
            }
            // Parent: xL_5__
            // Field count: 0
            namespace EventServerPostAdvanceTick_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventProfileStorageAvailable_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventPostDataUpdate_t {
            }
            // Parent: engine2
            // Field count: 7
            namespace EventClientPreSimulate_t {
                constexpr std::ptrdiff_t  = 0x80000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
            }
            // Parent: xL_5__
            // Field count: 7
            namespace EventClientPauseSimulate_t {
                constexpr std::ptrdiff_t  = 0x80000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
            }
            // Parent: None
            // Field count: 0
            namespace EventClientProcessNetworking_t {
            }
            // Parent: None
            // Field count: 0
            namespace CEntityAttributeTable {
            }
            // Parent: xL_5__
            // Field count: 7
            namespace EventClientPreOutputParallelWithServer_t {
                constexpr std::ptrdiff_t  = 0x80000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
            }
            // Parent: xL_5__
            // Field count: 7
            namespace EventAdvanceTick_t {
                constexpr std::ptrdiff_t  = 0x80000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
            }
            // Parent: None
            // Field count: 0
            namespace EventSplitScreenStateChanged_t {
            }
            // Parent: engine2
            // Field count: 0
            namespace EventClientPostAdvanceTick_t {
            }
            // Parent: None
            // Field count: 0
            namespace CVariantDefaultAllocator {
            }
            // Parent: None
            // Field count: 0
            namespace EventModInitialized_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventClientPreOutput_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventClientFrameSimulate_t {
            }
            // Parent: xL_5__
            // Field count: 0
            namespace EventServerAdvanceTick_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventSetTime_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventSimulate_t {
            }
            // Parent: None
            // Field count: 0
            namespace CEntityKeyValues {
            }
            // Parent: None
            // Field count: 0
            namespace EventClientAdvanceNonRenderedFrame_t {
            }
            // Parent: engine2
            // Field count: 7
            namespace EventServerProcessNetworking_t {
                constexpr std::ptrdiff_t  = 0x80000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
            }
            // Parent: None
            // Field count: 0
            namespace CEmptyEntityInstance {
            }
            // Parent: None
            // Field count: 0
            namespace EntComponentInfo_t {
            }
            // Parent: None
            // Field count: 0
            namespace EngineLoopState_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventClientPollNetworking_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventServerBeginAsyncPostTickWork_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventClientProcessInput_t {
            }
            // Parent: None
            // Field count: 0
            namespace EventServerEndSimulate_t {
            }
            // Parent: engine2
            // Field count: 7
            namespace EventServerPollNetworking_t {
                constexpr std::ptrdiff_t  = 0x80000000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0x5000; // 
                constexpr std::ptrdiff_t  = 0x0; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
                constexpr std::ptrdiff_t  = 0xBF; // 
            }
        }
    }
}
