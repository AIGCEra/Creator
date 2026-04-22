# Creator

**A runtime adaptation framework that extends AI Agent control from Chromium browsers to native Windows desktop applications.**

Any Agent technology capable of controlling Chromium tabs (e.g., OpenClaw, QClaw, Playwright) can gain the same level of control and observability over **64-bit WinForms and MFC applications** — **without modifying a single line of the Agent's internal logic.**

---

## 📌 Core Definition

Creator is a **runtime adaptation framework**. It does not alter the binary code of the target desktop application. Instead, it provides a tiny launcher that restarts the application as a Chromium browser process, exposing a standard CDP endpoint.

**Result:** The desktop app behaves exactly like a Chromium browser tab to any CDP-compatible Agent.

---

## ⚙️ Technical Overview

[**Creator**](https://github.com/AIGCEra/Creator/releases/tag/FirstRelease) uses a public 64-bit launcher component :

- **Default path:** `C:\Program Files\Tangram\Creator\Loader.exe`
- **Size:** 6.5 KB compiled; ~20.1 KB after EV code signing.

### What the launcher does:

| Step | Description |
|------|-------------|
| **Identity transformation** | Launches `appName.exe` as the *Browser Process* of a Chromium instance. |
| **Protocol exposure** | The app's UI structure (e.g., DockFill controls, CView views) becomes accessible via the Chrome DevTools Protocol (CDP). |
| **Interaction equivalence** | Agent operations on the desktop app are protocol-identical to operating a standard web page tab. |

The launcher exits immediately after bootstrapping the process — **it does not stay resident in memory.**

---

## 🚀 Quick Start (Application Integration)

For a compiled 64-bit desktop application `appName.exe`:

1. **Copy** `Loader.exe` into the same folder as `appName.exe`.
2. **Rename** the copied file to `appNameLoader.exe`.

That's it. No recompilation required.

### Compatibility Constraints

> **Current open-source release officially supports only 64-bit WinForms and 64-bit MFC applications.**

---

## 🔌 Integration with AI Agent Frameworks

Different Agent frameworks have different ways to specify the browser executable. Since Creator makes the target application fully compatible with Chromium instances, you only need to **redirect the "browser executable path"** to the generated loader.

### Example: OpenClaw

OpenClaw uses the `browser.executablePath` field. For an integrated application, modify it as follows:

```json
{
  "browser": {
    "executablePath": "C:\\Program Files\\YourApp\\appNameLoader.exe"
  }
}
