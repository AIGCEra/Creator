# Agent: Reconstructing Native Desktop Applications with Web
## LLM/AI Agent – A "Small Step" Breaking Through the Exe Black Box of Desktop Apps

## Chromium Host Mode

**Creator** is an open‑source Chromium browser:

1. GitHub source code: https://github.com/AIGCEra/Creator  
2. Installer package: https://github.com/AIGCEra/Creator/releases/tag/FirstRelease

For a compiled 64-bit desktop application `appName.exe`, Creator provides a **"Chromium Host Mode startup method"** – when launched in this mode, during its entire runtime lifecycle, the desktop application exhibits a complete **Chromium Browser Runtime State**:

`appName.exe` retains all its original designed functionality while gaining the status of a "browsing process", becoming a true Chromium browser.

Creator's goal is: all technical capabilities supported by the Chromium desktop browser – including Agent technologies, Web technologies, etc., except for "headless mode" – can be extended into desktop applications. The first version of Creator supports 64‑bit WinForm, MFC, and WPF desktop applications; subsequent versions will gradually expand the application types as well as support 32‑bit desktop applications.

As shown below, the "multi‑process browser structure" displayed when `appName.exe` runs with "both hands freed":
<img width="572" height="511" alt="image" src="https://github.com/user-attachments/assets/68cde92c-3c79-4246-bf8d-6c3d67995346" />

---

## Creating a Browser Window

After launching `appNameLoader`, repeatedly launch it again to create Chromium browser windows of the target application, supporting Chromium Tab Group and Chrome DevTools Protocol (CDP). Based on this step, `appName.exe` gains the full capability of Chrome to browse the Internet and the entire Web ecosystem. The window structure of the desktop application (e.g. DockFill controls, CView views) is mapped into a context accessible via Chrome DevTools Protocol (CDP).

<img width="483" height="344" alt="image" src="https://github.com/user-attachments/assets/ee3d6831-d7d5-452f-9f34-9c4227e60112" />


Similarly, the MFC application you compiled last year, when running, now has native "Chromium Tab Groups" inside:

<img width="743" height="392" alt="image" src="https://github.com/user-attachments/assets/c165d0d3-d5f9-4bb4-987f-2da6c12e2084" />


This is also a normal thing – it simply shows that the prologue of the Agent era is slowly unfolding, and desktop applications have broken through the functional boundaries set after compilation. It is a true portrayal…

Creator provides a 64‑bit desktop application launcher `Loader.exe`:

- Loader supports all command‑line arguments of the Chromium browser.
- Loader characteristics: 6.5 KB after compilation; about 20.1 KB after EV signing.
- Loader location: `C:\Program Files\Tangram\Creator\Loader.exe`

Follow the steps below to carry out a tangible verification of "Chromium Host Mode":

| Step | Description |
|------|-------------|
| 1 | Copy `Loader.exe` to the same directory where `appName.exe` is located. |
| 2 | Rename the copied file to `appNameLoader.exe`. |
| 3 | Launch: the sole responsibility of `appNameLoader.exe` is to start `appName.exe` as the main (browsing) process of the Creator browser, then exit without participating in runtime. This step is not mandatory, but optional. `appName.exe` will load the first web page `appName.app.html`. If this page does not exist, Creator will create a default page for `appName.exe` for developer reference and modification. An AI Agent's operations on this desktop application are equivalent, at the protocol level, to operating a standard web page tab. |
| 4 | Create browser windows: after launching `appNameLoader`, repeatedly launching `appNameLoader` can create Chromium browser windows for `appName.exe`, supporting Chromium Tab Groups and the Chrome DevTools Protocol (CDP). Based on this step, `appName.exe` gains the full ability to browse the internet with Chrome, as well as the complete Web ecosystem. The desktop application's window structures (e.g., DockFill controls, CView views) are mapped into contexts accessible via the Chrome DevTools Protocol (CDP). |
| 5 | Witness that "Chromium browser tabs" are everywhere: this step requires hands‑on practice by the developer. Use the standard Visual Studio Wizard to generate a WinForm or MFC application, and observe how "Chromium Tabs" can dynamically organize "application content" inside an application… |

We suggest the following verification flow: generate a 64‑bit WinForm (with one panel control) or MFC application `appName.exe`.

Creator reveals that already‑compiled 64‑bit WinForm, MFC, and WPF applications have the following three "hidden" ecological dimensions, allowing us to see the true three‑dimensional ecological structure of desktop applications:

| Dimension | Description |
|-----------|-------------|
| **Web Ecosystem** | Fully compatible with the entire Chrome ecosystem, including Chromium Tab, CDP, Chrome extensions, DevTools. |
| **Native Ecosystem** | Supports an unlimited number of native window types. |
| **AI Ecosystem** | Supports all LLM technologies supported by Chrome. |

This is a brand‑new software form, similar to a human "family structure", which fundamentally resolves the long‑standing camp split between "native content" and "Web content".

## The End of Native Compilation == The Starting Point of the Web Ecosystem

The rapid emergence of AI Agent technologies such as OpenClaw, Hermes, OpenAI's Codex, and Claude Computer Use has led many to believe that the AI Agent era has arrived. However, we must face a reality: these technologies are, in essence, still "browser‑based AI Agent" technologies. When facing the vast majority of exe files, because we have not found an effective way for AI/LLM to penetrate into the interior of an exe, we are still stuck with "blind guessing". That is, when faced with the screen output of an exe, these technologies can click the mouse and simulate keyboard input with increasing accuracy, but the Agent does not understand the true logic of the exe. This is not an issue specific to any particular Agent, but a common problem for all Agent technologies.

The combination of Creator and `appName` first endows the latter with a complete Web ecosystem, multi‑tab browser windows, CDP, Chrome extension support, and other mainstream browser features. At the same time, `appName` "contributes" native HTML elements, while Creator, following Web rules, gives birth to "Native‑Web" hybrid pages. This gives the desktop application a complete "character" – "native architecture as skeleton, web content as flesh". This is a new pattern that can reproduce itself.

Facing the fundamental difficulty of AI Agents in the desktop application world, the "Chromium Host Mode" perspective is as follows:

1. **Traditional approach**: An Agent facing a compiled native application can only be like a blind person feeling an elephant – "seeing" through screenshots, "touching" through simulated clicks. No matter how sophisticated its "hands" (OpenClaw) or how its "brain" (Hermes) evolves, it is always locked in the cage drawn by the original developer at design time. The pixel is a wall the Agent cannot penetrate.

2. **Chromium Host Mode**: Using the power of the browser's multi‑process architecture, the Agent is freed. It is no longer an imitator groping in a pixel maze, but becomes a true intelligent entity that can perceive the skeletal structure of the application.

A practical question: When facing a compiled exe, can AI technology break through the functional boundaries set before the exe was compiled? Creator's answer is: AI technology can definitely break through the boundaries set by exe compilation. This means: the emergence and creation of new functionalities for the exe will become reality. An exe file is merely the starting point of an ecosystem. This means that source code compilation of a native desktop application is no longer the end, but the origin of a software content ecosystem.

Relying on Creator's Chromium Host Mode, the Agent gains the ability to "reproduce and emerge" in the desktop application world – it can dynamically explore, reorganize, and evolve each application, breaking through the functional boundaries set at design time, entering a new era where software can become "stronger with use". The way this boundary is broken is: one desktop application, infinite runtime states. For `appName.exe`, there are infinite ways to write `appName.app.html`. Different initialization pages will produce completely different runtime states of the exe. If the developer treats `appName.app.html` as the entry point for AI, LLM and other technologies, then the desktop application becomes the control endpoint for the AI Agent.

With Creator, a compiled desktop application, such as a WinForm app, can further respond to events inside a web page:

```javascript
var form = null;
var treegrid = null;
var panel1_ = null;
var Splitter_ = null;
var CompositeGrid_Splitter_ = null;

cosmos.onLoadNativeMdiWindow = function (e) {
    form = e.form;
    switch (form.name) {
        case "mainForm":
            {
                form.onGalaxyCreated = function (e) {
                }
                form.onXobjCreated = function (e) {
                    var galaxy = e.xobj.getStr("galaxy");
                    var nucleus = e.xobj.getStr("nucleus"); //alert(galaxy);
                    switch (galaxy) {
                        case "nativeui":
                            {
                                switch (nucleus) {
                                    case "__native_ui_default__":
                                        {
                                            switch (e.xobj.name) {
                                                case "navCtrl":
                                                    {
                                                        e.xobj.onAgentMessageForXobj = function (e) {
                                                            switch (this.msgID) {
                                                                case "treeView1_OnAfterSelect":
                                                                    break;
                                                                case "button1_OnClick":
                                                                    break;
                                                                default:
                                                                    break;
                                                            }
                                                        }
                                                    }
                                                    break;
                                                case "webviewclient":
                                                    {
                                                        e.xobj.onAgentMessageForXobj = function (e) {
                                                            switch (this.msgID) {
                                                                case "treeView1_OnAfterSelect":
                                                                    {
                                                                        if (!!this.workElement) {
                                                                            this.Observe(this.workElement.getAttribute("targetcluster"), this.workElement.outerHTML);
                                                                            if (this.objtype == "nucleus") {
                                                                                this.ShowWebContent("contents", this.workElement.getAttribute("content"));
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                case "DynLayoutBtn_OnClick":
                                                                    {
                                                                        if (!!this.workElement) {
                                                                            this.Observe(this.workElement.getAttribute("targetcluster") + "_OnClick", this.workElement.outerHTML);
                                                                            if (this.objtype == "nucleus") {
                                                                                this.ShowWebContent("contents", this.workElement.getAttribute("content"));
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                                case "button1_OnClick":
                                                                    {
                                                                        if (!!this.workElement) {
                                                                            var xobj = this.sender;
                                                                            this.element.setAttribute("w12", "12345678");
                                                                            if (!!xobj) {
                                                                                xobj.ObserveEx("key1", cosmos.getElementById("mainwindow_1"));
                                                                                if (xobj.parent != null && xobj.parent.getLong("gridtype") == 4) {
                                                                                    xobj.parent.Observe(0, 0, "key1", cosmos.getElementById("mainwindow_2").outerHTML);
                                                                                }
                                                                            } else {
                                                                                alert(this.sender + " sender is form");
                                                                            }
                                                                            this.Observe(this.workElement.getAttribute("targetcluster"), this.workElement.outerHTML);
                                                                        }

                                                                        if (this.objtype == "nucleus") {
                                                                            this.ShowWebContent("contents", this.workElement.getAttribute("content"));
                                                                        }
                                                                    }
                                                                    break;
                                                                case "button2_OnClick":
                                                                    {
                                                                        if (!!this.workElement) {
                                                                            var xobj = this.sender;
                                                                            var xml = cosmos.getElementById("mainwindow_2").outerHTML;
                                                                            xobj.Observe("key2", xml);
                                                                            if (xobj.parent != null && xobj.parent.getLong("gridtype") == 4) {
                                                                                xobj.parent.ObserveEx(0, 0, "key2", cosmos.getElementById("mainwindow_1"));
                                                                            }
                                                                            this.ObserveEx(this.workElement.getAttribute("targetcluster"), this.workElement);
                                                                            if (this.objtype == "nucleus") {
                                                                                this.ShowWebContent("contents", this.workElement.getAttribute("content"));
                                                                            }
                                                                        }
                                                                    }
                                                                    break;
                                                            }
                                                        }
                                                    }
                                                    break;
                                            }
                                        }
                                        break;
                                }
                            }
                            break;
                        case "panel1":
                            {
                                panel1_ = e.galaxy;
                                switch (nucleus) {
                                    case "default":
                                        {
                                            switch (e.xobj.name) {
                                                case "Sunny_ntpctrl":
                                                    {
                                                        e.xobj.onAgentMessageForXobj = function (e) {
                                                            switch (this.msgID) {
                                                                case "button1_OnClick":
                                                                    {
                                                                        alert(this.docFragment.firstChild.outerHTML);
                                                                    }
                                                                    break;
                                                            }
                                                        }
                                                    }
                                                    break;
                                                case "Splitter1":
                                                    {
                                                        Splitter_ = e.grid;
                                                    }
                                                    break;
                                            }
                                        }
                                        break;
                                }
                            }
                            break;
                        case "mainclient@__native_ui_default__@default_frame":
                            {
                                switch (nucleus) {
                                    case "startup":
                                        break;
                                    case "compositegrid":
                                        {
                                            switch (e.xobj.name) {
                                                case "CompositeGrid_Splitter":
                                                    CompositeGrid_Splitter_ = e.grid;
                                                    break;
                                            }
                                        }
                                        break;
                                }
                            }
                            break;
                    }
                };
            }
            break;
        case "create_form_1":
            {
                form.onAgentMessageForNativeWindow = function (e) {
                    switch (e.msgID) {
                        case "button1_OnClick":
                            {
                                alert("您好\n" + e.form.workElement.outerHTML + "****\n" + e.form.getStr("textBox1"));
                            }
                            break;
                    }
                }
            }
            break;
        case "create_form_2":
            {
                //alert(form);
            }
            break;
    }
};


```


In the JavaScript callback shown below, after pressing the "button3", the web page not only creates a WinForm window, but also binds event callbacks to the newly created WinForm window:

```javascript
cosmos.onLoadNativeWindow = function (e) {
    form = e.form;
    switch (form.name) {
        case "mainForm":
            {
                form.addEventListener("button3", "OnClick", function (e) {
                    /*
                        Dynamically creating WinForm objects in web pages is one of the
                        important web extension technologies provided by Creator Browser, the
                        way to extend applications is similar to Visual Basic for Application
                        in MS Office, at this time, JavaScript is similar to VBA macro language.
                    */
                    var xform = cosmos.createWinForm(cosmos.getElementById("create_form_1"),
                        0,
                        function (formcreated) {
                            formcreated.addEventListener("button1", "OnClick", function (formobj) {
                                formobj.setStr("textBox1", "fill textbox by javascript: " + formobj.handle);
                            });
                            formcreated.BindCtrlValue("textBox1", function (e) {
                                alert("hi" + "  --  " + e.getStr("textBox1"));
                            });
                        });
                });
                /*
                 ClouldMessage is an important mode of interaction between Web code and
                 native code. by providing such a message mechanism, Creator Browser establishes
                 a complementary solution between local code and Web code.
                */
                form.onAgentMessageForNativeWindow = function (e) {
                    switch (this.msgID) {
                        case "button1_OnClick":
                            alert(this.workElement.children[0].outerHTML);
                            this.Observe("panel1", this.workElement.children[0].tagName, this.workElement.children[0].outerHTML);
                            cosmos.openUrl("host:webpage/WebApp1.html", 100);
                            break;
                        case "button2_OnClick":
                            alert(this.workElement.children[0].outerHTML);
                            this.Observe("panel1", this.workElement.children[0].tagName, this.workElement.children[0].outerHTML);
                            cosmos.openUrl("host:webpage/SubWebApp1.html", 2);
                            break;
                        default:
                            break;
                    }
                }
                form.onXobjCreated = function (e) {
                    var galaxy = e.xobj.getStr("galaxy");
                    var nucleus = e.xobj.getStr("nucleus");
                    switch (galaxy) {
                        case "panel1":
                            {
                                switch (nucleus) {
                                    case "default":
                                        {
                                            switch (e.xobj.name) {
                                                case "SunnyCtrl_UserControl2":
                                                    {
                                                        /*
                                                         If the native object corresponding to "xobj"
                                                         is not a WinForm object, processing the message
                                                         from the corresponding native object here:
                                                        */
                                                        e.xobj.onAgentMessageForXobj = function (e) {
                                                            switch (this.msgID) {
                                                                case "button1_OnClick":
                                                                    this.Observe("panel1", this.workElement.children[0].tagName, this.workElement.children[0].outerHTML);
                                                                    break;
                                                                default:
                                                                    break;
                                                            }
                                                        }
                                                    }
                                                    break;
                                            }
                                        }
                                        break;
                                }
                            }
                            break;
                    }
                };
            }
            break;
        case "create_form_1":
            {
                form.onAgentMessageForNativeWindow = function (e) {
                    switch (e.msgID) {
                        case "button1_OnClick":
                            alert(this.workElement.children[0].tagName);
                            this.Observe("mainpanel", this.workElement.children[0].tagName, this.workElement.children[0].outerHTML);
                            cosmos.Observe(this.workElement.children[1].tagName, this.workElement.children[1].outerHTML);
                            break;
                        default:
                            break;
                    }
                }
                /*
                 Creator Browser believes that the design of each WinForm object includes
                 two stages, one is the design stage of the native client, where the
                 role of the form designer is decisive, after the native code is compiled,
                 the structural design of WinForm objects will enter the second stage in
                 the web page, based on the description of WebDOM, the native structure
                 of WinForm will undergo huge runtime changes, each new UI element added
                 according to the Web description in WinForm will fire the event "onXobjCreated".
                */
                form.onXobjCreated = function (e) {
                    var galaxy = e.xobj.getStr("galaxy");
                    var nucleus = e.xobj.getStr("nucleus");
                    switch (galaxy) {
                        case "mainpanel":
                            {
                                switch (nucleus) {
                                    case "default":
                                        {
                                            switch (e.xobj.name) {
                                                case "sunnyForms2_Form4":
                                                    {
                                                        e.xobj.BindCtrlValue("textBox1", function (e) {
                                                            alert("BindCtrlValue, value was modified:" + e.getStr("textBox1"));
                                                        });
                                                        /*
                                                         If the native object corresponding to "xobj" is a WinForm object,
                                                         processing the message from the corresponding WinForm object here:
                                                        */
                                                        e.xobj.onAgentMessageForNativeWindow = function (e) {
                                                            switch (this.msgID) {
                                                                case "button1_OnClick":
                                                                    this.setStr("textBox1", "fill textbox by javascript: " + e.xobj.getStr("textBox1"))
                                                                    this.Observe("mainpanel", this.workElement.children[0].tagName, this.workElement.children[0].outerHTML);
                                                                    break;
                                                                case "textBox1_TextChanged":
                                                                    {
                                                                        alert("textBox1_TextChanged:" + e.xobj.getStr("text"));
                                                                    }
                                                                    break;
                                                                default:
                                                                    break;
                                                            }
                                                        }
                                                        /*
                                                         If the native object corresponding to "xobj" is not a WinForm object,
                                                         processing the message from the corresponding native object here:
                                                        */
                                                        e.xobj.onAgentMessageForXobj = function (e) {
                                                            switch (this.msgID) {
                                                                default:
                                                                    break;
                                                            }
                                                        }
                                                    }
                                                    break;
                                            }
                                        }
                                        break;
                                }
                            }
                            break;
                    }
                };
            }
            break;
    }
};
```

## Web Page Handling Win32 Messages

At the same time, the web page can directly handle Win32 messages of the desktop application:
```javascript
cosmos.onAgentMessageReceived = function (e) {
    switch (e.xobj.msgID) {
        case "TANGRAMAPP_READY":
            {
            }
            break;
        case "TEST_MFC_MSG":
            {
                //alert(e.xobj.getStr("testinfo")+e.xobj.handle);
            }
            break;
        case "TREECTRL_TvnSelchanged":
            {
                var name = e.xobj.getStr("treenodekey");
                alert(name);
                //alert(e.xobj.element.outerHTML);
                alert(e.xobj.getElementById(name).outerHTML);
                //alert(e.xobj.getElementById(name));
                var elems = e.xobj.getElementsByTagName(name);
                alert(elems[0].outerHTML);
            }
            break;
        case "WM_COMMAND":
            {
                alert(e.xobj.name);
                switch (e.xobj.getStr("CtrlClass")) {
                    case "Button":
                        {
                            alert("DocType:" + e.xobj.getStr("DocTypeID"));
                            alert("galaxy:" + e.xobj.getStr("galaxy"));
                            alert("nucleus:" + e.xobj.getStr("nucleus"));
                            alert(e.xobj.name);
                            console.log("WM_COMMAND_button\n");
                            //cosmos.sendMessage("COSMOS_CREATE_DOC", ".xxxx", "test", "33");
                        }
                        break;
                    case "Edit":
                        {
                        }
                        break;
                }
            }
            break;
        default:
            break;
    }
}

```


The Web dimension, Native dimension, and AI dimension define the ecological dimensions that a compiled desktop application should possess. This is the decisive foundation for AI to redefine desktop applications, and also the prerequisite for "intelligence emergence". A specific runtime form of a desktop application presents these three basic dimensions, and with the help of web pages to describe a particular scenario‑based form – that is Creator’s mission.

There is no doubt that this is the beginning of a multi‑perspective game among the "original developer of the desktop application", the "user of the desktop application", and "Web & AI technologies". When the "software user" knows that "software" has ecological dimensions, and when "AI & Web" technologies discover "possibility anchor points" at runtime inside the desktop exe, all this means: the original developer’s control over the application boundary begins to "silently disappear".

## AI Agent Controls Desktop Applications Based on CDP

Creator provides a unified **"Agent Bridge"** for compiled desktop applications: it reduces the problem of AI Agent controlling native desktop applications to "controlling a Chromium browser". Agent developers only need to "configure the browser executable path" to control the software ecosystem of the native application.

---

## Different Agent Frameworks

Different Agent frameworks have different ways of specifying the "browser executable". Since Creator has turned the target application into a true "Chromium browser instance", the Agent framework only needs to redirect the "browser executable path" to the generated Loader.

Take OpenClaw as an example: OpenClaw relies on the `browser.executablePath` field to specify the browser location ("Browser Use" corresponds to `executable_path`). For the target application `appName.exe`, simply adjust the value of this field as follows:

Take OpenClaw as an example: OpenClaw relies on the `browser.executablePath` field to specify the browser location ("Browser Use" corresponds to `executable_path`). For the target application `appName.exe`, simply adjust the value of this field as follows:

```json
"browser": {
  "executablePath": "C:\\Program Files\\YourApp\\appNameLoader.exe"
}
```
Note that the "browser executable path" in the Agent configuration should point to the full absolute path of appNameLoader.exe. All Chromium control commands from the Agent (page navigation, DOM traversal, element interaction) will automatically act on the corresponding desktop application context.

## “Window Nucleus” – The Entrance to “Capability Emergence”

A person’s planning consciousness is actually a form of “capability emergence”. If your living space is less than 10 m² and less than 2.5 meters in height, you likely have no complex planning consciousness. Your real thought at that time is simply: “just being able to live here is enough.” But if your livable space is 1000 m², then you will naturally develop planning consciousness – you set aside 100 m² for comfortable living, and rationally plan the remaining 900 m² to create value. Your ideas naturally emerge.

Now, change the scenario and consider MS Excel – a well‑known piece of software. If we allow you to “move out” the content area of an Excel Workbook and give you the power to plan, for example, facing the interior of an “emptied Excel Workbook window”, you can “add partitions”, plan the layout, reallocate space, and then move the moved‑out content back in, as shown below:

<img width="439" height="318" alt="image" src="https://github.com/user-attachments/assets/7d6e823d-e14c-4a2c-9bed-506fd66125ee" />


At this point, your next thought would probably be: “When moving back, what should be placed in the other positions, and can the new objects in all new positions cooperate?” As shown in the actual “screen recording”:

<img width="853" height="480" alt="image007" src="https://github.com/user-attachments/assets/7800d4fb-283a-4a30-b8a4-a7ee0c936552" />

---

## WebView Can Also Be “Moved Out”

Similarly, if the browser’s WebView can also be “moved out”:

<img width="583" height="404" alt="image" src="https://github.com/user-attachments/assets/fde05c31-903d-4f9c-a2f9-d061f7c7aed4" />


After “adding partitions” and moving back, what will happen? Perhaps this is “the beginning of function emergence”.

Creator’s starting point is: HTML does not necessarily have to be bound to a WebView; it can be bound to a wider range of application windows. We call such windows **“Window Nucleus”**:

> In a native desktop window, if the screen geometry of a child window depends solely on the screen geometry of its parent window, then that child window is called a **Window Nucleus**, and the parent window is called a **“nucleated window”**.

Window Nuclei exist widely in various types of desktop applications. The following types of windows are all Window Nuclei:

1. WebView  
2. .NET Controls whose Dock property is DockFill or DockNone  
3. CView and CSplitterWnd in MFC  
4. Document content windows in MS Office applications  

The essence of Creator is: since it is impossible for us to rewrite all existing `.exe` files, we should find a general way to control the **“geometric behavior”** of the exe. Thus, the LLM finds its initial anchor point – the Window Nucleus. This gives birth to “possibility” and provides an ecological foundation for “intelligence emergence”: if a desktop application has no ecological capabilities, then AI deployment is out of the question, because facing determinism, no matter how powerful your technology, the result is certain, and AI will be at a loss.

Creator’s logic is very simple: **any Window Nucleus can be “moved out” at runtime, and after re‑layout, moved back in.**

---

## Rules for Re‑layout

1. Use an **“m rows by n columns” grid** to take over the nucleus – just like drawing partition blueprints for a new office: different rows and columns can be separated by draggable splitters.  
2. A **1‑row by n‑column grid**, when needed, can be interpreted as a set of **“switchable tabs”** – which can have different tab styles.  
3. Grid structures and tab structures can be **recursively nested**.  
4. The empty spaces created by grids and tabs can be **dynamically filled** with objects such as WinForm, .NET Control, WPF, MFC CWnd/CView, or “Chromium Tab Groups”.

It is clear that the above rules given by Creator can be expressed clearly using the DOM. If the dynamic layouts expressed by 1‑4 can be **generated at runtime** and freely switched at runtime, then the Window Nucleus becomes **“the gateway to emergence”**.

## The “Native Content Dimension” of Desktop Applications

A compiled desktop application can still fully utilize native windows that exist in various DLLs: WinForm forms, UserControls, WPF, MFC CWnd objects that reside in dynamic link libraries can act as “extended HTML” elements to participate in web page authoring, thus forming a tab structure that goes beyond the standard “Chromium Tab” – inside a “Chromium Tab”, a combination of a set of **“native windows” and web pages** is supported, as shown below:

<img width="609" height="433" alt="image" src="https://github.com/user-attachments/assets/adafbfb0-0749-4f78-a21e-fd3fa8857683" />


Because the number of native window components (e.g., .NET UserControl, WPF) far exceeds the types of standard HTML elements, this kind of “Native‑HTML” hybrid page will form a brand‑new “content ecosystem” whose dimensions far surpass the standard Web ecosystem.

In particular – inside a desktop window, “Chromium Tab Groups” can be used to dynamically organize “Native‑HTML” hybrid content:

<img width="532" height="322" alt="image" src="https://github.com/user-attachments/assets/4854c78e-e410-47ce-b530-811ec64e7711" />

---

## Breaking Through the Ceiling

No matter how sophisticated traditional Agent techniques are in their Skills, they are still fundamentally **“simulation operations”** – they can only reach the upper limit of application automation, and that upper limit is fixed the moment the source code is compiled.  
Creator’s **Native dimension** completely breaks through the “window type” limitation present at design time – at runtime, inside the application window, it can **“synthesize” new composite windows** based on DOM rules, while directly exposing native windows as controllable objects just like web page elements. This allows the Agent not only to **“simulate operations”**, but also to reach a **“capability boundary”** that cannot be touched at design time. This is the real anchor point that breaks through the ceiling.

<img width="789" height="431" alt="image" src="https://github.com/user-attachments/assets/6c641919-3406-4051-be9b-371ed4b89325" />


Because after being launched by Loader, the desktop application **is itself a Chromium browser**, thanks to its CDP support mechanism, the desktop application becomes a common control endpoint for all AI Agent technologies that support “Browser Automation”. And the “Native‑HTML” hybrid pages become the ecological foundation for **“AI capability emergence”** in desktop applications.

## Creator Security Mechanism

For a specific desktop application appName.exe:

The first time appNameLoader.exe is launched, one CreateRemoteThread call occurs.

Subsequent launches of appNameLoader will not trigger CreateRemoteThread; instead, they will create a new browser window for appName.

This means that during the entire runtime lifecycle of appName.exe, the CreateRemoteThread call occurs only once. Once we make this clear, CreateRemoteThread is safe.

The currently released version of Creator is an experimental version for developer testing, so no security policy is yet provided. Subsequent versions will gradually provide graded security policies. The planned security levels are as follows:
The currently released version of Creator is for developer evaluation purposes.  
Subsequent versions will gradually provide hierarchical security policies. The planned security levels are:

| Level | Policy |
|-------|--------|
| **L0** | Retain experimental capabilities, but with prominent markings and a startup parameter requirement. |
| **L1** | First implement tab / session / token / network boundaries. |
| **L2** | Add app / window nucleus operation allowlist. |
| **L3** | Integrate organizational policy, approval, audit logging. |
| **L4** | Define interfaces and evidence format first, leaving room for third‑party / industry profiles. |
