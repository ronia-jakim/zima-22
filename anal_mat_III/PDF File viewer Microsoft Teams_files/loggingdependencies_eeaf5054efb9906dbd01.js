(window.webpackJsonpMidgardBootstrapper=window.webpackJsonpMidgardBootstrapper||[]).push([[0],{56:function(e,t,o){"use strict";o.r(t),o.d(t,"Logger",(function(){return p})),o.d(t,"ConsoleConsumer",(function(){return v})),o.d(t,"EventHub",(function(){return h})),o.d(t,"AriaLogConsumer",(function(){return O})),o.d(t,"AWTLogManager",(function(){return R}));var r,a,i,n=o(0),c=o(17),s=o(10),d=o(7),f=o(1),b=o(21),u=o(6),p=function(){function e(e,t,o,r){var a=this;this.eventHubPromise=e,this.monitoringData=t,this.logVerbose=o,this.staticProperties=r,this.errorMap={},this.registerErrors=function(e,t){a.errorMap[e]=Object(n.a)({},t)},this.logEUPL=function(e,t,o,r){var i=f.a.SUCCESS,n="".concat(e,"_").concat(i);a.eventHubPromise.then((function(c){return c.broadcastEvent({eventId:n,version:a.monitoringData.version?a.monitoringData.version:s.a,type:"EUPL",source:a.monitoringData.source,featureName:t,clientCorrelationid:a.monitoringData.clientCorrelationId,qosScenarioName:e,qosEventType:i,qosTagId:void 0,duration:o,properties:a.getProperties(r)})}))},this.logQoS=function(e,t,o,r,i,d,f,b){if(Object(u.a)(r)&&(!Object(u.b)(r)||a.logVerbose())){var p=d?"".concat(e,"_").concat(t,"_").concat(d):"".concat(e,"_").concat(t);a.eventHubPromise.then((function(u){return u.broadcastEvent({eventId:p,version:a.monitoringData.version?a.monitoringData.version:s.a,type:"QoS",midgardError:b&&Object(c.a)(b.midgardError)?a.lookupError(b.midgardError):void 0,source:a.monitoringData.source,featureName:r,clientCorrelationid:a.monitoringData.clientCorrelationId,qosScenarioName:e,qosEventType:t,qosTagId:null===d?void 0:d,duration:i,properties:a.getProperties(Object(n.a)(Object(n.a)({},b),{result:o,RequestId:f}))})}))}}}return e.prototype.startMonitor=function(e,t){var o=this;return new b.a(this.eventHubPromise,this.monitoringData,e,t,(function(){return o.staticProperties()}),(function(e){return Promise.resolve(o.lookupError(e))}),this.logVerbose())},e.prototype.logEvent=function(e){this.log(e,"Event")},e.prototype.logUserInteractionEvent=function(e){var t={exportType:"UserInteraction",exportName:e.eventId};e=Object(n.a)(Object(n.a)({},e),{exportOptions:t}),this.log(e,"Event")},e.prototype.logError=function(e){this.log(e,"Error")},e.prototype.logTrace=function(e){this.log(e,"Trace")},e.prototype.flush=function(){return this.eventHubPromise.then((function(e){return e.broadcastFlush()}))},e.prototype.destroy=function(){return this.eventHubPromise.then((function(e){return e.broadcastDestroy()}))},e.prototype.setEventHub=function(e){this.eventHubPromise=Promise.resolve(e)},e.prototype.getEventHub=function(){return this.eventHubPromise},e.prototype.getStaticProperties=function(){return this.staticProperties},e.prototype.setStaticProperties=function(e){this.staticProperties=e},e.prototype.lookupError=function(e){if(!Object(c.a)(e))return"Invalid midgardError";var t=this.errorMap[e.family];if(!t)return"Unknown family ".concat(e.family,": ").concat(e.code);var o=t[e.code];return o?"".concat(e.family,": ").concat(o):"Unknown code: ".concat(e.family,": ").concat(e.code)},e.prototype.log=function(e,t){!Object(u.a)(e.featureName)||Object(u.b)(e.featureName)&&!this.logVerbose()||this.broadcastEvent(e.eventId,e.featureName,t,e.exportOptions,e.properties)},e.prototype.broadcastEvent=function(e,t,o,r,a){var i=this;e&&this.monitoringData.source&&this.monitoringData.clientCorrelationId&&this.eventHubPromise.then((function(n){return n.broadcastEvent({eventId:e,version:i.monitoringData.version?i.monitoringData.version:s.a,type:o,midgardError:a&&Object(c.a)(a.midgardError)?i.lookupError(a.midgardError):void 0,source:i.monitoringData.source,featureName:t,clientCorrelationid:i.monitoringData.clientCorrelationId,qosScenarioName:void 0,qosEventType:void 0,qosTagId:void 0,duration:void 0,exportOptions:r,properties:i.getProperties(a)})}))},e.prototype.getProperties=function(e){var t;return Object(n.a)(Object(n.a)(Object(n.a)(((t={})[d.a.CLIENT_TIMESTAMP]=(new Date).getTime().toString(),t),this.monitoringData.properties),this.staticProperties()),e)},e}();function l(e){return"exportOptions"in e&&Boolean(e.exportOptions&&"UserInteraction"===e.exportOptions.exportType)}!function(e){e[e.NotSet=0]="NotSet",e[e.SoftwareSetup=1]="SoftwareSetup",e[e.ProductServiceUsage=2]="ProductServiceUsage",e[e.ProductServicePerformance=4]="ProductServicePerformance",e[e.DeviceConfiguration=8]="DeviceConfiguration",e[e.InkingTypingSpeech=16]="InkingTypingSpeech"}(r||(r={})),function(e){e[e.ReservedDoNotUse=0]="ReservedDoNotUse",e[e.RequiredDiagnosticData=10]="RequiredDiagnosticData",e[e.OptionalDiagnosticData=100]="OptionalDiagnosticData",e[e.RequiredServiceData=110]="RequiredServiceData",e[e.AlwaysOnRequiredServiceData=120]="AlwaysOnRequiredServiceData"}(a||(a={})),function(e){e[e.NotSet=0]="NotSet",e[e.Measure=1]="Measure",e[e.Diagnostics=2]="Diagnostics",e[e.CriticalBusinessImpact=191]="CriticalBusinessImpact",e[e.CriticalCensus=192]="CriticalCensus",e[e.CriticalExperimentation=193]="CriticalExperimentation",e[e.CriticalUsage=194]="CriticalUsage"}(i||(i={}));var g=console.log,v=function(){function e(e,t,o,r,a,i){void 0===t&&(t="NO_USER"),void 0===o&&(o="NO_USER"),void 0===r&&(r="NO_TENANT"),void 0===a&&(a="NO_REGION"),void 0===i&&(i=g),this.eventMapper=e,this._userAadObjectId=t,this._userPuid=o,this._tenantAadObjectId=r,this._lokiRegion=a,this.consoleLog=i}return e.prototype.getCommonProperties=function(e){return{userAadObjectId:this._userAadObjectId,userPuid:this._userPuid,tenantAadObjectId:this._tenantAadObjectId,lokiRegion:this._lokiRegion,isGDPREvent:l(e),isConsoleLogger:!0}},e.prototype.canConsumeEvent=function(e){return!0},e.prototype.consume=function(e){var t=this;if(e){var o=this.getCommonProperties(e),i=this.eventMapper({event:e,additionalProperties:o});i?(Array.isArray(i)||(i=[i]),i.forEach((function(e){var o,i=null===(o=e.awtEventData.properties)||void 0===o?void 0:o.eventId;try{var n=e.awtEventData.properties.properties&&JSON.parse(e.awtEventData.properties.properties);n&&(e.awtEventData.properties.properties=n)}catch(e){}t.consoleLog("%cLog: ".concat(e.awtEventData.name||e.awtEventData.Name," ").concat(i?"| ".concat(i):""," | Level: ").concat(a[e.diagnosticLevel]," | Category: ").concat(r[e.dataCategories]||e.dataCategories,"\n"),"font-weight: bold",e)}))):this.consoleLog(JSON.parse(JSON.stringify(e)))}},e.prototype.flush=function(){return Promise.resolve()},e.prototype.destroy=function(){},e}(),h=function(){function e(e){this.consumers=e||[]}return e.prototype.broadcastEvent=function(e){e&&this.consumers.forEach((function(t){t.canConsumeEvent(e)&&t.consume(e)}))},e.prototype.broadcastFlush=function(){return Promise.all(this.consumers.map((function(e){return e.flush()}))).then()},e.prototype.broadcastDestroy=function(){this.consumers.forEach((function(e){e.destroy()}))},e.prototype.registerConsumer=function(e){this.consumers.push(e)},e}(),D=o(32),G=o.n(D),P=o(5),m=o(53),E={Generic:"",GDPR:""},y={Prod:{Generic:"33d70a864599496b982a39f036f71122-2064703e-3a9d-4d90-8362-eec08dffe8e8-7176",GDPR:""},Dev:{Generic:"ceb930c7c5d041e899b6de945bc4c6ee-e9ee0db4-0fa5-437b-966d-e8b2950f8d7d-7290",GDPR:""},Blackforest:E,GccHigh:E,DoD:E,Gallatin:E,AG08:E,AG09:E,EU:E},A={LivePeopleCards:{Prod:{Generic:"a1bde8e78ab14b6198caa18be9d3126e-9277d376-40b1-48ec-92f5-b2ee3f44345b-7212",GDPR:"f615f561ec88437db01f752caf151695-7cf4617b-dcbd-4b5b-a5eb-0079c1ba008a-6975"},Dev:E,Blackforest:{Generic:"a1bde8e78ab14b6198caa18be9d3126e-eb71f759-e748-47d9-922a-96d2522430e4-7094",GDPR:"f615f561ec88437db01f752caf151695-18332f16-126d-42b9-a2f4-2dd55a1ec030-6918"},GccHigh:{Generic:"a1bde8e78ab14b6198caa18be9d3126e-5bace7e6-5357-46f3-88e0-449f4eaacb40-7215",GDPR:"f615f561ec88437db01f752caf151695-d48bf8b4-e399-433b-bb04-f0d344722fe4-7383"},DoD:{Generic:"a1bde8e78ab14b6198caa18be9d3126e-7e485978-0dca-4684-abdd-5bcebedd8f2f-7631",GDPR:"f615f561ec88437db01f752caf151695-e653e3c7-d1be-444c-832d-d3707d03bbcd-6862"},Gallatin:{Generic:"a1bde8e78ab14b6198caa18be9d3126e-99d02291-5114-42b3-aa94-ddd964108c06-7145",GDPR:"f615f561ec88437db01f752caf151695-9728472d-c6e2-4067-a597-f0a9e261a858-6852"},AG08:{Generic:"a1bde8e78ab14b6198caa18be9d3126e-e74e132e-f357-44eb-a0b7-941458772fc3-6908",GDPR:"f615f561ec88437db01f752caf151695-c0a58d75-92c7-4136-ac9f-a689166bf700-6735"},AG09:{Generic:"a1bde8e78ab14b6198caa18be9d3126e-17844c21-72d2-418f-b188-8088d55ab78e-7408",GDPR:"f615f561ec88437db01f752caf151695-2bb48ba5-f1c5-459d-978e-4cc61a974ec3-6762"},EU:E},LivePersonaPicker:{Prod:{Generic:"67199ce661b3472494bbec0bf2e06c27-c34071ab-96bc-40d9-9162-7a83b521b4dd-7282",GDPR:"30b97846c6c640ed90e3b4e06d98a986-b6251ed6-9d7f-4e24-8ace-044e9613d08b-7662"},Dev:E,Blackforest:E,GccHigh:E,DoD:E,Gallatin:E,AG08:E,AG09:E,EU:E},OfficeFeed:{Prod:{Generic:"60dd0301e6c846e9b0699cbbe259efb6-c35f87eb-1000-4625-8cab-d2dd316a0ea6-7539",GDPR:"dc2f4eb67f454d4187656e6aa9063e83-ed148abb-5cbb-42bd-9cfc-298b1dd8c444-7942"},Dev:E,Blackforest:E,GccHigh:E,DoD:E,Gallatin:E,AG08:E,AG09:E,EU:E},LivePersonaEditor:{Prod:{Generic:"77af0c0ae9af49e684693d42352c0cf7-9d604ea0-ea41-4c75-8897-d7dbb0c7f7e9-7006",GDPR:"d2aac9418005423daf110f7008485383-d48b2953-983d-4b8b-857a-9f724d685b97-7218"},Dev:E,Blackforest:{Generic:"77af0c0ae9af49e684693d42352c0cf7-2c4a13e2-2fef-4ba6-a12a-a369ed907ff9-7140",GDPR:"d2aac9418005423daf110f7008485383-b85d1253-d229-42c8-9cf6-b8ae20c4b61b-7439"},GccHigh:{Generic:"77af0c0ae9af49e684693d42352c0cf7-8b12b5b0-234b-4f96-a57b-dcf09a10401e-7221",GDPR:"d2aac9418005423daf110f7008485383-ee34f80b-d66c-4c0a-9a75-bd32d151a28d-7184"},DoD:{Generic:"77af0c0ae9af49e684693d42352c0cf7-48932264-dbbc-45fe-9173-0ace4b216b7a-7229",GDPR:"d2aac9418005423daf110f7008485383-5cb0db99-dc8f-4b1e-9076-43821ee4622f-7316"},Gallatin:{Generic:"77af0c0ae9af49e684693d42352c0cf7-531738b2-25b2-424a-b4a8-20fbdae1eed8-7390",GDPR:"d2aac9418005423daf110f7008485383-583a5fc4-1880-4f24-afe4-96ebcba895d1-7235"},AG08:E,AG09:E,EU:E},MicrosoftSearch:y,MicrosoftSearch3S:y,OrgExplorer:{Prod:{Generic:"4ed6dab22bbc45efbd6427253faa4673-1052ea5c-f672-4ea9-a7c9-da17fc53f249-7272",GDPR:""},Dev:E,Blackforest:E,GccHigh:E,DoD:E,Gallatin:E,AG08:E,AG09:E,EU:{Generic:"4ed6dab22bbc45efbd6427253faa4673-1052ea5c-f672-4ea9-a7c9-da17fc53f249-7272",GDPR:""}},NamePronunciation:{Prod:{Generic:"cdba0d01d3c24f188e55845778e5505d-a9c8b79c-ea70-49e9-9352-507b2a8df76f-6790",GDPR:""},Dev:{Generic:"c47a2f5cb4e24f409e35cef5e23ac962-73b83934-404c-41d4-b3f1-2296bb746aa1-7252",GDPR:""},Blackforest:E,GccHigh:E,DoD:E,Gallatin:E,AG08:E,AG09:E,EU:E},CortexTopics:{Prod:{Generic:"8f7cccc3c534426e8894f45b76e666b9-b80f2549-ddb1-4588-8602-f54037a070e7-7552",GDPR:""},Dev:E,Blackforest:E,GccHigh:E,DoD:E,Gallatin:E,AG08:E,AG09:E,EU:E},EmbeddedOrgChart:{Prod:{Generic:"c1ad6239a4cd4efbb5427a8c14cc89fc-cf33fa48-963e-411b-b007-829fc329adea-7223",GDPR:"6ba9d88a8df4434c89bac4e8f9e31e7e-ca849317-67e5-434a-a207-2b270c0715e6-7054"},Dev:E,Blackforest:E,GccHigh:E,DoD:E,Gallatin:E,AG08:E,AG09:E,EU:E},GraphLoop:{Prod:{Generic:"0b9ecc7b7e834bf187902769b46094a5-91edd6e2-c1c7-4a32-970b-ee3285ab394c-6877",GDPR:""},Dev:{Generic:"4a67ed1bd82e40c9af5fed95d457c2b7-d0bad78c-babb-44d1-9b31-5e32c2cc3d98-7303",GDPR:""},Blackforest:E,GccHigh:E,DoD:E,Gallatin:E,AG08:E,AG09:E,EU:E},CardLoop:{Prod:{Generic:"78a9315a99bf4c5285101c1864da2e87-546eda6a-798d-4dd6-bea4-ca5713e12d63-6907",GDPR:""},Dev:E,Blackforest:E,GccHigh:E,DoD:E,Gallatin:E,AG08:E,AG09:E,EU:E}},O=function(){function e(e,t,o,r,a,i,n){var c=this;if(this._userAadObjectId=e,this._userPuid=t,this._tenantAadObjectId=o,this._lokiRegion=r,this.eventMapper=a,this.options=i,this.propertyMap={},this.memoryPropertyStorageOverride={setProperty:function(e,t){c.propertyMap[e]=t},getProperty:function(e){return c.propertyMap[e]||""}},!i.forceIntegratedLogger&&n){var s=n;i.isGDPRIntegratedLoggerDisabled||(s=this.initializeAriaSDKAndGetLogFunction(A[i.tenant][i.environment].GDPR,i.environment)),this.loggers={logRegularEvent:n,logGDPREvent:s}}else this.initializeAriaSDK(A[i.tenant][i.environment].Generic,i.environment),this.loggers={logRegularEvent:this.logToAria,logGDPREvent:this.logToAria}}return e.prototype.getCommonProperties=function(e){return{userAadObjectId:this._userAadObjectId,userPuid:this._userPuid,tenantAadObjectId:this._tenantAadObjectId,lokiRegion:this._lokiRegion,isGDPREvent:l(e)}},e.prototype.logToAria=function(e,t){m.AWTLogManager.getLogger(t).logEvent(e.awtEventData)},e.prototype.logWith=function(e,t,o){Array.isArray(t)?t.forEach((function(t){return e(t,o)})):e(t,o)},e.prototype.initializeAriaSDK=function(e,t){var o=void 0;switch(t){case"Blackforest":o=m.AWT_COLLECTOR_URL_GERMANY;break;case"GccHigh":o=m.AWT_COLLECTOR_URL_USGOV_DOJ;break;case"DoD":o=m.AWT_COLLECTOR_URL_USGOV_DOD;break;case"AG08":o="https://collector.azure.eaglex.ic.gov/Collector/3.0/";break;case"AG09":o="https://collector.azure.microsoft.scloud/Collector/3.0/";break;case"EU":o="https://eu-mobile.events.data.microsoft.com/Collector/3.0/";break;case"Dev":case"Gallatin":case"Prod":break;default:Object(P.a)(t)}return m.AWTLogManager.initialize(e,{collectorUri:o,enableAutoUserSession:Boolean(this.options.enableAutoUserSession),disableCookiesUsage:!0,propertyStorageOverride:this.memoryPropertyStorageOverride})},e.prototype.initializeAriaSDKAndGetLogFunction=function(e,t){return this.initializeAriaSDK(e,t),this.logToAria},e.prototype.canConsumeEvent=function(e){return!0},e.prototype.consume=function(e){var t=this.options,o=t.environment,r=t.tenant,a=this.getCommonProperties(e);if(l(e)){var i=this.eventMapper&&this.eventMapper({event:e,additionalProperties:a,eventNameOverride:e.exportOptions.exportName});if(!i)return;this.logWith(this.loggers.logGDPREvent,i,A[r][o].GDPR)}var n=this.eventMapper&&this.eventMapper({event:e,additionalProperties:a});n&&this.logWith(this.loggers.logRegularEvent,n,A[r][o].Generic)},e.prototype.flush=function(){return new Promise((function(e){m.AWTLogManager.flush((function(){e()}))}))},e.prototype.destroy=function(){m.AWTLogManager.flushAndTeardown()},Object.defineProperty(e.prototype,"userAadObjectId",{set:function(e){""!==e&&(this._userAadObjectId=e)},enumerable:!1,configurable:!0}),Object.defineProperty(e.prototype,"userPuid",{set:function(e){""!==e&&(this._userPuid=e)},enumerable:!1,configurable:!0}),Object.defineProperty(e.prototype,"tenantAadObjectId",{set:function(e){""!==e&&(this._tenantAadObjectId=e)},enumerable:!1,configurable:!0}),Object.defineProperty(e.prototype,"lokiRegion",{set:function(e){""!==e&&(this._lokiRegion=e)},enumerable:!1,configurable:!0}),e}(),R=G.a}}]);