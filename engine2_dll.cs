// Generated using https://github.com/a2x/cs2-dumper
// 2026-04-21 01:48:42.191005800 UTC

namespace CS2Dumper.Schemas {
    // Module: engine2.dll
    // Class count: 56
    // Enum count: 2
    public static class Engine2Dll {
        // Alignment: 4
        // Member count: 3
        public enum EntityDormancyType_t : uint {
            ENTITY_NOT_DORMANT = 0x0,
            ENTITY_DORMANT = 0x1,
            ENTITY_SUSPENDED = 0x2
        }
        // Alignment: 4
        // Member count: 4
        public enum EntityIOTargetType_t : uint {
            ENTITY_IO_TARGET_INVALID = unchecked((uint)-1),
            ENTITY_IO_TARGET_ENTITYNAME = 0x2,
            ENTITY_IO_TARGET_EHANDLE = 0x6,
            ENTITY_IO_TARGET_ENTITYNAME_OR_CLASSNAME = 0x7
        }
        // Parent: None
        // Field count: 0
        public static class CEntityInstance {
        }
        // Parent: None
        // Field count: 0
        public static class CEntityComponent {
        }
        // Parent: None
        // Field count: 7
        public static class CScriptComponent {
            public const nint  = 0x80000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
        }
        // Parent: None
        // Field count: 0
        public static class CEntityIdentity {
        }
        // Parent: engine2
        // Field count: 7
        public static class EventClientPostSimulate_t {
            public const nint  = 0x80000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
        }
        // Parent: None
        // Field count: 0
        public static class EventSimpleLoopFrameUpdate_t {
        }
        // Parent: engine2
        // Field count: 7
        public static class EventPostAdvanceTick_t {
            public const nint  = 0x80000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
        }
        // Parent: None
        // Field count: 0
        public static class CEntityIOOutput {
        }
        // Parent: None
        // Field count: 0
        public static class EventClientSceneSystemThreadStateChange_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventClientOutput_t {
        }
        // Parent: xL_5__
        // Field count: 7
        public static class EventServerPostSimulate_t {
            public const nint  = 0x80000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
        }
        // Parent: None
        // Field count: 0
        public static class CEntityComponentHelper {
        }
        // Parent: None
        // Field count: 0
        public static class GameTime_t {
        }
        // Parent: xL_5__
        // Field count: 7
        public static class EventServerBeginSimulate_t {
            public const nint  = 0x80000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
        }
        // Parent: None
        // Field count: 0
        public static class EntityIOQueuePrioritizedEvent_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventServerEndAsyncPostTickWork_t {
        }
        // Parent: engine2
        // Field count: 0
        public static class EventClientAdvanceTick_t {
        }
        // Parent: None
        // Field count: 0
        public static class EntInput_t {
        }
        // Parent: None
        // Field count: 0
        public static class CNetworkVarChainer {
        }
        // Parent: engine2
        // Field count: 7
        public static class EventClientSimulate_t {
            public const nint  = 0x80000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
        }
        // Parent: None
        // Field count: 0
        public static class EventClientPostOutput_t {
        }
        // Parent: None
        // Field count: 0
        public static class GameTick_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventClientPollInput_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventPreDataUpdate_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventClientProcessGameInput_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventFrameBoundary_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventAppShutdown_t {
        }
        // Parent: xL_5__
        // Field count: 0
        public static class EventServerPostAdvanceTick_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventProfileStorageAvailable_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventPostDataUpdate_t {
        }
        // Parent: engine2
        // Field count: 7
        public static class EventClientPreSimulate_t {
            public const nint  = 0x80000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
        }
        // Parent: xL_5__
        // Field count: 7
        public static class EventClientPauseSimulate_t {
            public const nint  = 0x80000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
        }
        // Parent: None
        // Field count: 0
        public static class EventClientProcessNetworking_t {
        }
        // Parent: None
        // Field count: 0
        public static class CEntityAttributeTable {
        }
        // Parent: xL_5__
        // Field count: 7
        public static class EventClientPreOutputParallelWithServer_t {
            public const nint  = 0x80000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
        }
        // Parent: xL_5__
        // Field count: 7
        public static class EventAdvanceTick_t {
            public const nint  = 0x80000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
        }
        // Parent: None
        // Field count: 0
        public static class EventSplitScreenStateChanged_t {
        }
        // Parent: engine2
        // Field count: 0
        public static class EventClientPostAdvanceTick_t {
        }
        // Parent: None
        // Field count: 0
        public static class CVariantDefaultAllocator {
        }
        // Parent: None
        // Field count: 0
        public static class EventModInitialized_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventClientPreOutput_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventClientFrameSimulate_t {
        }
        // Parent: xL_5__
        // Field count: 0
        public static class EventServerAdvanceTick_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventSetTime_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventSimulate_t {
        }
        // Parent: None
        // Field count: 0
        public static class CEntityKeyValues {
        }
        // Parent: None
        // Field count: 0
        public static class EventClientAdvanceNonRenderedFrame_t {
        }
        // Parent: engine2
        // Field count: 7
        public static class EventServerProcessNetworking_t {
            public const nint  = 0x80000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
        }
        // Parent: None
        // Field count: 0
        public static class CEmptyEntityInstance {
        }
        // Parent: None
        // Field count: 0
        public static class EntComponentInfo_t {
        }
        // Parent: None
        // Field count: 0
        public static class EngineLoopState_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventClientPollNetworking_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventServerBeginAsyncPostTickWork_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventClientProcessInput_t {
        }
        // Parent: None
        // Field count: 0
        public static class EventServerEndSimulate_t {
        }
        // Parent: engine2
        // Field count: 7
        public static class EventServerPollNetworking_t {
            public const nint  = 0x80000000; // 
            public const nint  = 0x0; // 
            public const nint  = 0x5000; // 
            public const nint  = 0x0; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
            public const nint  = 0xBF; // 
        }
    }
}
